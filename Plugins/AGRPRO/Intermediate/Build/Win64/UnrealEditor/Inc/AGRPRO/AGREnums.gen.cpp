// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Data/AGREnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGREnums() {}
// Cross Module References
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_ERotationMethod();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAimOffsets();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAimOffsetClamp();
// End Cross Module References
	static UEnum* ERotationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_ERotationMethod, Z_Construct_UPackage__Script_AGRPRO(), TEXT("ERotationMethod"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<ERotationMethod>()
	{
		return ERotationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERotationMethod(ERotationMethod_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("ERotationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_ERotationMethod_Hash() { return 1177408025U; }
	UEnum* Z_Construct_UEnum_AGRPRO_ERotationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERotationMethod"), 0, Get_Z_Construct_UEnum_AGRPRO_ERotationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERotationMethod::NONE", (int64)ERotationMethod::NONE },
				{ "ERotationMethod::RotateToVelocity", (int64)ERotationMethod::RotateToVelocity },
				{ "ERotationMethod::AbsoluteRotation", (int64)ERotationMethod::AbsoluteRotation },
				{ "ERotationMethod::DesiredRotation", (int64)ERotationMethod::DesiredRotation },
				{ "ERotationMethod::DesiredAtAngle", (int64)ERotationMethod::DesiredAtAngle },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbsoluteRotation.DisplayName", "Absolute Rotation" },
				{ "AbsoluteRotation.Name", "ERotationMethod::AbsoluteRotation" },
				{ "BlueprintType", "true" },
				{ "DesiredAtAngle.DisplayName", "Desired At Angle" },
				{ "DesiredAtAngle.Name", "ERotationMethod::DesiredAtAngle" },
				{ "DesiredRotation.DisplayName", "Desired Rotation" },
				{ "DesiredRotation.Name", "ERotationMethod::DesiredRotation" },
				{ "ModuleRelativePath", "Public/Data/AGREnums.h" },
				{ "NONE.DisplayName", "NONE" },
				{ "NONE.Name", "ERotationMethod::NONE" },
				{ "RotateToVelocity.DisplayName", "Rotate To Velocity" },
				{ "RotateToVelocity.Name", "ERotationMethod::RotateToVelocity" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"ERotationMethod",
				"ERotationMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAimOffsets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAimOffsets, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAimOffsets"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAimOffsets>()
	{
		return EAimOffsets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAimOffsets(EAimOffsets_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAimOffsets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAimOffsets_Hash() { return 3630359556U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAimOffsets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAimOffsets"), 0, Get_Z_Construct_UEnum_AGRPRO_EAimOffsets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAimOffsets::NONE", (int64)EAimOffsets::NONE },
				{ "EAimOffsets::Aim", (int64)EAimOffsets::Aim },
				{ "EAimOffsets::Look", (int64)EAimOffsets::Look },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim.DisplayName", "Aim" },
				{ "Aim.Name", "EAimOffsets::Aim" },
				{ "BlueprintType", "true" },
				{ "Look.DisplayName", "Look" },
				{ "Look.Name", "EAimOffsets::Look" },
				{ "ModuleRelativePath", "Public/Data/AGREnums.h" },
				{ "NONE.DisplayName", "NONE" },
				{ "NONE.Name", "EAimOffsets::NONE" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAimOffsets",
				"EAimOffsets",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAimOffsetClamp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAimOffsetClamp, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAimOffsetClamp"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAimOffsetClamp>()
	{
		return EAimOffsetClamp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAimOffsetClamp(EAimOffsetClamp_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAimOffsetClamp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAimOffsetClamp_Hash() { return 1013939949U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAimOffsetClamp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAimOffsetClamp"), 0, Get_Z_Construct_UEnum_AGRPRO_EAimOffsetClamp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAimOffsetClamp::Nearest", (int64)EAimOffsetClamp::Nearest },
				{ "EAimOffsetClamp::Left", (int64)EAimOffsetClamp::Left },
				{ "EAimOffsetClamp::Right", (int64)EAimOffsetClamp::Right },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.DisplayName", "Left" },
				{ "Left.Name", "EAimOffsetClamp::Left" },
				{ "ModuleRelativePath", "Public/Data/AGREnums.h" },
				{ "Nearest.DisplayName", "Nearest" },
				{ "Nearest.Name", "EAimOffsetClamp::Nearest" },
				{ "Right.DisplayName", "Right" },
				{ "Right.Name", "EAimOffsetClamp::Right" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAimOffsetClamp",
				"EAimOffsetClamp",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
