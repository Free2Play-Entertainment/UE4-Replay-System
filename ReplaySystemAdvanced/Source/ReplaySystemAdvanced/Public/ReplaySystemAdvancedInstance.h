// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NetworkReplayStreaming.h"
#include "ReplaySystemAdvancedInstance.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FS_ReplaySystemReplayInfo
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString ReplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString FriendlyName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString MapName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString Gamemode;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FDateTime Timestamp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 LengthInMS;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool bIsValid;

    FS_ReplaySystemReplayInfo(FString NewName, FString NewFriendlyName, FString NewMapName, FString NewGamemode, FDateTime NewTimestamp, int32 NewLengthInMS)
    {
        ReplayName = NewName;
        FriendlyName = NewFriendlyName;
        MapName = NewMapName;
        Gamemode = NewGamemode;
        Timestamp = NewTimestamp;
        LengthInMS = NewLengthInMS;
        bIsValid = true;
    }

    FS_ReplaySystemReplayInfo()
    {
        ReplayName = "Replay";
        FriendlyName = "Replay";
        MapName = "None";
        Gamemode = "Capture the Flag";
        Timestamp = FDateTime::MinValue();
        LengthInMS = 0;
        bIsValid = false;
    }
};
UCLASS()
class REPLAYSYSTEMADVANCED_API UReplaySystemAdvancedInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UReplaySystemAdvancedInstance();

		UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString RecordingName;

		UPROPERTY(EditDefaultsOnly, Category = "Replays")
			FString FriendlyRecordingName;

		UFUNCTION(BlueprintCallable, Category = "Replays")
			void StartRecording(FString ReplayName, FString FriendlyName);

		UFUNCTION(BlueprintCallable, Category = "Replays")
			void StopRecording();

		UFUNCTION(BlueprintCallable, Category = "Replays")
			void StartReplay(FString ReplayName);

         /*Start looking for/finding replays on the hard drive */
        UFUNCTION(BlueprintCallable, Category = "Replays")
            void FindReplays();

         /*Apply a new custom name to the replay (for UI only) */
        UFUNCTION(BlueprintCallable, Category = "Replays")
            void RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName);

        UFUNCTION(BlueprintCallable, Category = "Replays")
            void DeleteReplay(const FString& ReplayName);


        virtual void Init() override;

protected:
    UFUNCTION(BlueprintImplementableEvent, Category = "Replays")
        void BP_OnFindReplaysComplete(const TArray<FS_ReplaySystemReplayInfo>& AllReplays);


private:

    // for FindReplays() 
    TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr;
    FOnEnumerateStreamsComplete OnEnumerateStreamsCompleteDelegate;

    void OnEnumerateStreamsComplete(const TArray<FNetworkReplayStreamInfo>& StreamInfos);

    FOnDeleteFinishedStreamComplete OnDeleteFinishedStreamCompleteDelegate;

    void OnDeleteFinishedStreamComplete(const bool bDeleteSucceeded);
};
