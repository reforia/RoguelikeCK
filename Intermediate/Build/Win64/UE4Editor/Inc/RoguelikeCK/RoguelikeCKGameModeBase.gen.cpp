// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RoguelikeCKGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoguelikeCKGameModeBase() {}
// Cross Module References
	ROGUELIKECK_API UClass* Z_Construct_UClass_ARoguelikeCKGameModeBase_NoRegister();
	ROGUELIKECK_API UClass* Z_Construct_UClass_ARoguelikeCKGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RoguelikeCK();
// End Cross Module References
	void ARoguelikeCKGameModeBase::StaticRegisterNativesARoguelikeCKGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARoguelikeCKGameModeBase_NoRegister()
	{
		return ARoguelikeCKGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ARoguelikeCKGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_RoguelikeCK,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "RoguelikeCKGameModeBase.h" },
				{ "ModuleRelativePath", "RoguelikeCKGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARoguelikeCKGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARoguelikeCKGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoguelikeCKGameModeBase, 425663403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoguelikeCKGameModeBase(Z_Construct_UClass_ARoguelikeCKGameModeBase, &ARoguelikeCKGameModeBase::StaticClass, TEXT("/Script/RoguelikeCK"), TEXT("ARoguelikeCKGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoguelikeCKGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
