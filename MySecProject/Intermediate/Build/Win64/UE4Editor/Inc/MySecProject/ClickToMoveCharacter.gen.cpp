// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecProject/ClickToMoveCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickToMoveCharacter() {}
// Cross Module References
	MYSECPROJECT_API UClass* Z_Construct_UClass_AClickToMoveCharacter_NoRegister();
	MYSECPROJECT_API UClass* Z_Construct_UClass_AClickToMoveCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MySecProject();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AClickToMoveCharacter::StaticRegisterNativesAClickToMoveCharacter()
	{
	}
	UClass* Z_Construct_UClass_AClickToMoveCharacter_NoRegister()
	{
		return AClickToMoveCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AClickToMoveCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClickToMoveCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MySecProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickToMoveCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClickToMoveCharacter.h" },
		{ "ModuleRelativePath", "ClickToMoveCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClickToMoveCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_SpringArmComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AClickToMoveCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_SpringArmComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClickToMoveCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AClickToMoveCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClickToMoveCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickToMoveCharacter_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClickToMoveCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClickToMoveCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClickToMoveCharacter_Statics::ClassParams = {
		&AClickToMoveCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AClickToMoveCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AClickToMoveCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AClickToMoveCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClickToMoveCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClickToMoveCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClickToMoveCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClickToMoveCharacter, 3662546606);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClickToMoveCharacter(Z_Construct_UClass_AClickToMoveCharacter, &AClickToMoveCharacter::StaticClass, TEXT("/Script/MySecProject"), TEXT("AClickToMoveCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClickToMoveCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
