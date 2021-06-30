// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Data/AGR_Footstep_Notify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_Footstep_Notify() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_Footstep_Notify_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_Footstep_Notify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
// End Cross Module References
	void UAGR_Footstep_Notify::StaticRegisterNativesUAGR_Footstep_Notify()
	{
	}
	UClass* Z_Construct_UClass_UAGR_Footstep_Notify_NoRegister()
	{
		return UAGR_Footstep_Notify::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_Footstep_Notify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FootKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_Footstep_Notify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_Footstep_Notify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Data/AGR_Footstep_Notify.h" },
		{ "ModuleRelativePath", "Public/Data/AGR_Footstep_Notify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_Footstep_Notify_Statics::NewProp_FootKey_MetaData[] = {
		{ "Category", "AGR" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/AGR_Footstep_Notify.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_Footstep_Notify_Statics::NewProp_FootKey = { "FootKey", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_Footstep_Notify, FootKey), METADATA_PARAMS(Z_Construct_UClass_UAGR_Footstep_Notify_Statics::NewProp_FootKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_Footstep_Notify_Statics::NewProp_FootKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGR_Footstep_Notify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_Footstep_Notify_Statics::NewProp_FootKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_Footstep_Notify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_Footstep_Notify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGR_Footstep_Notify_Statics::ClassParams = {
		&UAGR_Footstep_Notify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAGR_Footstep_Notify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_Footstep_Notify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_Footstep_Notify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_Footstep_Notify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_Footstep_Notify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_Footstep_Notify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_Footstep_Notify, 3210882465);
	template<> AGRPRO_API UClass* StaticClass<UAGR_Footstep_Notify>()
	{
		return UAGR_Footstep_Notify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_Footstep_Notify(Z_Construct_UClass_UAGR_Footstep_Notify, &UAGR_Footstep_Notify::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_Footstep_Notify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_Footstep_Notify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
