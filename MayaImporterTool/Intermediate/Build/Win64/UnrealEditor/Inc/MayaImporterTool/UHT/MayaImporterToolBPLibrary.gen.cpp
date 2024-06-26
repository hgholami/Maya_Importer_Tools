// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayaImporterTool/MayaImporterToolBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMayaImporterToolBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MAYAIMPORTERTOOL_API UClass* Z_Construct_UClass_UMayaImporterToolBPLibrary();
MAYAIMPORTERTOOL_API UClass* Z_Construct_UClass_UMayaImporterToolBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MayaImporterTool();
// End Cross Module References

// Begin Class UMayaImporterToolBPLibrary Function OpenFilesDialog
struct Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics
{
	struct MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms
	{
		FString dialogTitle;
		FString defaultPath;
		FString defaultFile;
		FString filetypes;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MayaImporterTool" },
		{ "ModuleRelativePath", "MayaImporterToolBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_filetypes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_dialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_defaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_defaultFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filetypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_dialogTitle = { "dialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms, dialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogTitle_MetaData), NewProp_dialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_defaultPath = { "defaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms, defaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultPath_MetaData), NewProp_defaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_defaultFile = { "defaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms, defaultFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultFile_MetaData), NewProp_defaultFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_filetypes = { "filetypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms, filetypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_filetypes_MetaData), NewProp_filetypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_dialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_defaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_defaultFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_filetypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMayaImporterToolBPLibrary, nullptr, "OpenFilesDialog", nullptr, nullptr, Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::MayaImporterToolBPLibrary_eventOpenFilesDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMayaImporterToolBPLibrary::execOpenFilesDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_dialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_defaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_defaultFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_filetypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UMayaImporterToolBPLibrary::OpenFilesDialog(Z_Param_dialogTitle,Z_Param_defaultPath,Z_Param_defaultFile,Z_Param_filetypes);
	P_NATIVE_END;
}
// End Class UMayaImporterToolBPLibrary Function OpenFilesDialog

// Begin Class UMayaImporterToolBPLibrary Function OpenSingleFileDialog
struct Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics
{
	struct MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms
	{
		FString dialogTitle;
		FString defaultPath;
		FString defaultFile;
		FString filetypes;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MayaImporterTool" },
		{ "ModuleRelativePath", "MayaImporterToolBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_filetypes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_dialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_defaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_defaultFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filetypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_dialogTitle = { "dialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms, dialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogTitle_MetaData), NewProp_dialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_defaultPath = { "defaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms, defaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultPath_MetaData), NewProp_defaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_defaultFile = { "defaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms, defaultFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultFile_MetaData), NewProp_defaultFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_filetypes = { "filetypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms, filetypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_filetypes_MetaData), NewProp_filetypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_dialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_defaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_defaultFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_filetypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMayaImporterToolBPLibrary, nullptr, "OpenSingleFileDialog", nullptr, nullptr, Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::MayaImporterToolBPLibrary_eventOpenSingleFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMayaImporterToolBPLibrary::execOpenSingleFileDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_dialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_defaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_defaultFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_filetypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMayaImporterToolBPLibrary::OpenSingleFileDialog(Z_Param_dialogTitle,Z_Param_defaultPath,Z_Param_defaultFile,Z_Param_filetypes);
	P_NATIVE_END;
}
// End Class UMayaImporterToolBPLibrary Function OpenSingleFileDialog

// Begin Class UMayaImporterToolBPLibrary Function ResetPivot
struct Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics
{
	struct MayaImporterToolBPLibrary_eventResetPivot_Parms
	{
		const UObject* actor;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MayaIMporterTool" },
		{ "ModuleRelativePath", "MayaImporterToolBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventResetPivot_Parms, actor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actor_MetaData), NewProp_actor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MayaImporterToolBPLibrary_eventResetPivot_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::NewProp_actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMayaImporterToolBPLibrary, nullptr, "ResetPivot", nullptr, nullptr, Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::MayaImporterToolBPLibrary_eventResetPivot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::MayaImporterToolBPLibrary_eventResetPivot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMayaImporterToolBPLibrary::execResetPivot)
{
	P_GET_OBJECT(UObject,Z_Param_actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMayaImporterToolBPLibrary::ResetPivot(Z_Param_actor);
	P_NATIVE_END;
}
// End Class UMayaImporterToolBPLibrary Function ResetPivot

// Begin Class UMayaImporterToolBPLibrary
void UMayaImporterToolBPLibrary::StaticRegisterNativesUMayaImporterToolBPLibrary()
{
	UClass* Class = UMayaImporterToolBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenFilesDialog", &UMayaImporterToolBPLibrary::execOpenFilesDialog },
		{ "OpenSingleFileDialog", &UMayaImporterToolBPLibrary::execOpenSingleFileDialog },
		{ "ResetPivot", &UMayaImporterToolBPLibrary::execResetPivot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMayaImporterToolBPLibrary);
UClass* Z_Construct_UClass_UMayaImporterToolBPLibrary_NoRegister()
{
	return UMayaImporterToolBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "MayaImporterToolBPLibrary.h" },
		{ "ModuleRelativePath", "MayaImporterToolBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenFilesDialog, "OpenFilesDialog" }, // 1109852601
		{ &Z_Construct_UFunction_UMayaImporterToolBPLibrary_OpenSingleFileDialog, "OpenSingleFileDialog" }, // 2924371877
		{ &Z_Construct_UFunction_UMayaImporterToolBPLibrary_ResetPivot, "ResetPivot" }, // 1798658142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMayaImporterToolBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MayaImporterTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics::ClassParams = {
	&UMayaImporterToolBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMayaImporterToolBPLibrary()
{
	if (!Z_Registration_Info_UClass_UMayaImporterToolBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMayaImporterToolBPLibrary.OuterSingleton, Z_Construct_UClass_UMayaImporterToolBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMayaImporterToolBPLibrary.OuterSingleton;
}
template<> MAYAIMPORTERTOOL_API UClass* StaticClass<UMayaImporterToolBPLibrary>()
{
	return UMayaImporterToolBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMayaImporterToolBPLibrary);
UMayaImporterToolBPLibrary::~UMayaImporterToolBPLibrary() {}
// End Class UMayaImporterToolBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_houma_BCIT_Tech_Arts_TECA_6500___Adv_Script_MayaImporterTool_HostProject_Plugins_MayaImporterTool_Source_MayaImporterTool_MayaImporterToolBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMayaImporterToolBPLibrary, UMayaImporterToolBPLibrary::StaticClass, TEXT("UMayaImporterToolBPLibrary"), &Z_Registration_Info_UClass_UMayaImporterToolBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMayaImporterToolBPLibrary), 1865719563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_houma_BCIT_Tech_Arts_TECA_6500___Adv_Script_MayaImporterTool_HostProject_Plugins_MayaImporterTool_Source_MayaImporterTool_MayaImporterToolBPLibrary_h_1186296729(TEXT("/Script/MayaImporterTool"),
	Z_CompiledInDeferFile_FID_Users_houma_BCIT_Tech_Arts_TECA_6500___Adv_Script_MayaImporterTool_HostProject_Plugins_MayaImporterTool_Source_MayaImporterTool_MayaImporterToolBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_houma_BCIT_Tech_Arts_TECA_6500___Adv_Script_MayaImporterTool_HostProject_Plugins_MayaImporterTool_Source_MayaImporterTool_MayaImporterToolBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
