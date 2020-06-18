// Copyright (c) 2020 Epgenix

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FReplaySystemAdvancedModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
