// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecProject/ClicktoMovePC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClicktoMovePC() {}
// Cross Module References
	MYSECPROJECT_API UClass* Z_Construct_UClass_AClicktoMovePC_NoRegister();
	MYSECPROJECT_API UClass* Z_Construct_UClass_AClicktoMovePC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MySecProject();
// End Cross Module References
	void AClicktoMovePC::StaticRegisterNativesAClicktoMovePC()
	{
	}
	UClass* Z_Construct_UClass_AClicktoMovePC_NoRegister()
	{
		return AClicktoMovePC::StaticClass();
	}
	struct Z_Construct_UClass_AClicktoMovePC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClicktoMovePC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MySecProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClicktoMovePC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ClicktoMovePC.h" },
		{ "ModuleRelativePath", "ClicktoMovePC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClicktoMovePC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClicktoMovePC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClicktoMovePC_Statics::ClassParams = {
		&AClicktoMovePC::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AClicktoMovePC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClicktoMovePC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClicktoMovePC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClicktoMovePC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClicktoMovePC, 2195695669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClicktoMovePC(Z_Construct_UClass_AClicktoMovePC, &AClicktoMovePC::StaticClass, TEXT("/Script/MySecProject"), TEXT("AClicktoMovePC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClicktoMovePC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
