// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Characters/AGRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRCharacter() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_AAGRCharacter_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_AAGRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister();
// End Cross Module References
	void AAGRCharacter::StaticRegisterNativesAAGRCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAGRCharacter_NoRegister()
	{
		return AAGRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAGRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AGRAnimMasterComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AGRAnimMasterComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAGRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/AGRCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/AGRCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGRCharacter_Statics::NewProp_AGRAnimMasterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AGR PRO" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/AGRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGRCharacter_Statics::NewProp_AGRAnimMasterComponent = { "AGRAnimMasterComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAGRCharacter, AGRAnimMasterComponent), Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAGRCharacter_Statics::NewProp_AGRAnimMasterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAGRCharacter_Statics::NewProp_AGRAnimMasterComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGRCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGRCharacter_Statics::NewProp_AGRAnimMasterComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAGRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGRCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGRCharacter_Statics::ClassParams = {
		&AAGRCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAGRCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAGRCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAGRCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAGRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAGRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAGRCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAGRCharacter, 1923455534);
	template<> AGRPRO_API UClass* StaticClass<AAGRCharacter>()
	{
		return AAGRCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAGRCharacter(Z_Construct_UClass_AAGRCharacter, &AAGRCharacter::StaticClass, TEXT("/Script/AGRPRO"), TEXT("AAGRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAGRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
