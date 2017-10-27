// Copyright 2017-2018 Federico Santamorena, Inc. All Rights Reserved.

#include "UE4Logger.h"

#define LOCTEXT_NAMESPACE "FUE4LoggerModule"

void FUE4LoggerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FUE4LoggerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE4LoggerModule, UE4Logger)