// Copyright (c) 2020 Epgenix

#
#include "ReplaySystemAdvancedInstance.h"
#include "ReplaySystemAdvanced.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/NetworkReplayStreaming/NullNetworkReplayStreaming/Public/NullNetworkReplayStreaming.h"
#include "NetworkReplayStreaming.h"
#include "NetworkVersion.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Misc/DateTime.h"

UReplaySystemAdvancedInstance::UReplaySystemAdvancedInstance()
{
	RecordingName = "MyReplay";
	FriendlyRecordingName = "MyReplay";
}

void UReplaySystemAdvancedInstance::Init()
{
	UGameInstance::Init();

	// create a ReplayStreamer for FindReplays() and DeleteReplay(..)
	EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	// Link FindReplays() delegate to function
	OnEnumerateStreamsCompleteDelegate = FOnEnumerateStreamsComplete::CreateUObject(this, &UReplaySystemAdvancedInstance::OnEnumerateStreamsComplete);

	// Link DeleteReplay() delegate to function
	OnDeleteFinishedStreamCompleteDelegate = FOnDeleteFinishedStreamComplete::CreateUObject(this, &UReplaySystemAdvancedInstance::OnDeleteFinishedStreamComplete);
}

void UReplaySystemAdvancedInstance::OnEnumerateStreamsComplete(const TArray<FNetworkReplayStreamInfo>& StreamInfos)
{
	TArray<FS_ReplaySystemReplayInfo> AllReplays;

	for (FNetworkReplayStreamInfo StreamInfo : StreamInfos)
	{
		if (!StreamInfo.bIsLive)
		{
			AllReplays.Add(FS_ReplaySystemReplayInfo(StreamInfo.Name, StreamInfo.FriendlyName, StreamInfo.MapName, StreamInfo.Gamemode, StreamInfo.Timestamp, StreamInfo.LengthInMS));
		}
	}

	BP_OnFindReplaysComplete(AllReplays);
}

void UReplaySystemAdvancedInstance::OnDeleteFinishedStreamComplete(const bool bDeleteSucceeded)
{
	FindReplays();
}

void UReplaySystemAdvancedInstance::StartRecording(FString ReplayName, FString FriendlyName)
{
	FriendlyName = FString::Printf(TEXT("Replay-%d-%d-%d"),
		FDateTime::Now().GetYear(), FDateTime::Now().GetMonth(), FDateTime::Now().GetDay());
	StartRecordingReplay(ReplayName, FriendlyName);
	UE_LOG(LogTemp, Display, TEXT("Started replay recording to '%s'"), *FriendlyName);
}

void UReplaySystemAdvancedInstance::StopRecording()
{
	StopRecordingReplay();
	UE_LOG(LogTemp, Display, TEXT("Finished replay recording!"));
}

void UReplaySystemAdvancedInstance::StartReplay(FString ReplayName)
{
	UE_LOG(LogTemp, Display, TEXT("Playing replay recording from '%s'"), *ReplayName);
	PlayReplay(ReplayName);


}

void UReplaySystemAdvancedInstance::FindReplays()
{
	if (EnumerateStreamsPtr.Get())
	{	/*Nur eine lösung für den error eigentlich müsste da statt FEnumerateStreamsCallback OnEnumerateStreamsCompleteDelegate hin*/
	EnumerateStreamsPtr.Get()->EnumerateStreams(FNetworkReplayVersion(), FString(), FString(), FEnumerateStreamsCallback());
	}
} 


void UReplaySystemAdvancedInstance::RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName)
{
	// Get File Info
	FNullReplayInfo Info;

	const FString DemoPath = FPaths::Combine(*FPaths::ProjectSavedDir(), TEXT("Demos/"));
	const FString StreamDirectory = FPaths::Combine(*DemoPath, *ReplayName);
	const FString StreamFullBaseFilename = FPaths::Combine(*StreamDirectory, *ReplayName);
	const FString InfoFilename = StreamFullBaseFilename + TEXT(".replayinfo");

	TUniquePtr<FArchive> InfoFileArchive(IFileManager::Get().CreateFileReader(*InfoFilename));

	if (InfoFileArchive.IsValid() && InfoFileArchive->TotalSize() != 0)
	{
		FString JsonString;
		*InfoFileArchive << JsonString;

		Info.FromJson(JsonString);
		Info.bIsValid = true;

		InfoFileArchive->Close();
	}

	// Set FriendlyName
	Info.FriendlyName = NewFriendlyReplayName;

	// Write File Info
	TUniquePtr<FArchive> ReplayInfoFileAr(IFileManager::Get().CreateFileWriter(*InfoFilename));

	if (ReplayInfoFileAr.IsValid())
	{
		FString JsonString = Info.ToJson();
		*ReplayInfoFileAr << JsonString;

		ReplayInfoFileAr->Close();
	}
}

void UReplaySystemAdvancedInstance::DeleteReplay(const FString& ReplayName)
{
	if (EnumerateStreamsPtr.Get())
	{
		EnumerateStreamsPtr.Get()->DeleteFinishedStream(ReplayName, FDeleteFinishedStreamCallback());
	}
}