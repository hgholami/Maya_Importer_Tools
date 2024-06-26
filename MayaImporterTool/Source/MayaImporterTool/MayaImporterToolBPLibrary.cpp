// Copyright Epic Games, Inc. All Rights Reserved.

#include "MayaImporterToolBPLibrary.h"
#include "MayaImporterTool.h"

UMayaImporterToolBPLibrary::UMayaImporterToolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer){}

const TArray<FString> UMayaImporterToolBPLibrary::OpenFilesDialog(
	const FString& dialogTitle, const FString& defaultPath, const FString& defaultFile, const FString& filetypes)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

	if (!DesktopPlatform) {
		UE_LOG(LogTemp, Error, TEXT("This import tool only works on the Desktop Platform"));
		return TArray<FString>();
	}

	TArray<FString> OutFilenames;
	bool bOpened = DesktopPlatform->OpenFileDialog(nullptr,
		dialogTitle,
		defaultPath,
		defaultFile,
		filetypes,
		EFileDialogFlags::Multiple,
		OutFilenames);

	if (!bOpened) {
		UE_LOG(LogTemp, Error, TEXT("Could not open file(s)"));
		return TArray<FString>();
	}

	return OutFilenames;
}

const FString UMayaImporterToolBPLibrary::OpenSingleFileDialog(
	const FString& dialogTitle, const FString& defaultPath, const FString& defaultFile, const FString& filetypes)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

	if (!DesktopPlatform) {
		UE_LOG(LogTemp, Error, TEXT("This import tool only works on the Desktop Platform"));
		return FString();
	}

	TArray<FString> OutFilenames;
	bool bOpened = DesktopPlatform->OpenFileDialog(nullptr,
		dialogTitle,
		defaultPath,
		defaultFile,
		filetypes,
		EFileDialogFlags::None,
		OutFilenames);

	if (!bOpened) {
		UE_LOG(LogTemp, Error, TEXT("Could not open file(s)"));
		return FString();
	}

	OutFilenames;

	if (OutFilenames.IsEmpty()) {
		return FString();
	}
	return OutFilenames[0];
}

const FString UMayaImporterToolBPLibrary::ResetPivot(const UObject* actor)
{
	return actor->GetFName().ToString();
}
