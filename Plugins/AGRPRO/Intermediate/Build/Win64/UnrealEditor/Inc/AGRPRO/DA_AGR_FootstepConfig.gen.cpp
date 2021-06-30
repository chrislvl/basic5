// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Data/DA_AGR_FootstepConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_AGR_FootstepConfig() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_UDA_AGR_FootstepConfig_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UDA_AGR_FootstepConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDA_AGR_FootstepConfig::execGetFoostepSettings)
	{
		P_GET_OBJECT_REF(USoundAttenuation,Z_Param_Out_AttenuationRef);
		P_GET_OBJECT_REF(USoundConcurrency,Z_Param_Out_ConcurrencyRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFoostepSettings(Z_Param_Out_AttenuationRef,Z_Param_Out_ConcurrencyRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_AGR_FootstepConfig::execGetVelocityRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinRange);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVelocityRange(Z_Param_Out_MinRange,Z_Param_Out_MaxRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_AGR_FootstepConfig::execGetSurfaceReaction)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InputParam);
		P_GET_OBJECT_REF(USoundCue,Z_Param_Out_Sound);
		P_GET_OBJECT_REF(UNiagaraSystem,Z_Param_Out_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSurfaceReaction(EPhysicalSurface(Z_Param_InputParam),Z_Param_Out_Sound,Z_Param_Out_Particle);
		P_NATIVE_END;
	}
	void UDA_AGR_FootstepConfig::StaticRegisterNativesUDA_AGR_FootstepConfig()
	{
		UClass* Class = UDA_AGR_FootstepConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFoostepSettings", &UDA_AGR_FootstepConfig::execGetFoostepSettings },
			{ "GetSurfaceReaction", &UDA_AGR_FootstepConfig::execGetSurfaceReaction },
			{ "GetVelocityRange", &UDA_AGR_FootstepConfig::execGetVelocityRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics
	{
		struct DA_AGR_FootstepConfig_eventGetFoostepSettings_Parms
		{
			USoundAttenuation* AttenuationRef;
			USoundConcurrency* ConcurrencyRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencyRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::NewProp_AttenuationRef = { "AttenuationRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetFoostepSettings_Parms, AttenuationRef), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::NewProp_ConcurrencyRef = { "ConcurrencyRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetFoostepSettings_Parms, ConcurrencyRef), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::NewProp_AttenuationRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::NewProp_ConcurrencyRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR Footsteps" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_AGR_FootstepConfig, nullptr, "GetFoostepSettings", nullptr, nullptr, sizeof(DA_AGR_FootstepConfig_eventGetFoostepSettings_Parms), Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics
	{
		struct DA_AGR_FootstepConfig_eventGetSurfaceReaction_Parms
		{
			TEnumAsByte<EPhysicalSurface> InputParam;
			USoundCue* Sound;
			UNiagaraSystem* Particle;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputParam;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::NewProp_InputParam = { "InputParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetSurfaceReaction_Parms, InputParam), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetSurfaceReaction_Parms, Sound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetSurfaceReaction_Parms, Particle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::NewProp_InputParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR Footsteps" },
		{ "Comment", "// Get sound cues realtive to the physical surfaces called\n" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
		{ "ToolTip", "Get sound cues realtive to the physical surfaces called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_AGR_FootstepConfig, nullptr, "GetSurfaceReaction", nullptr, nullptr, sizeof(DA_AGR_FootstepConfig_eventGetSurfaceReaction_Parms), Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics
	{
		struct DA_AGR_FootstepConfig_eventGetVelocityRange_Parms
		{
			float MinRange;
			float MaxRange;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetVelocityRange_Parms, MinRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_AGR_FootstepConfig_eventGetVelocityRange_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::NewProp_MaxRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR Footsteps" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_AGR_FootstepConfig, nullptr, "GetVelocityRange", nullptr, nullptr, sizeof(DA_AGR_FootstepConfig_eventGetVelocityRange_Parms), Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDA_AGR_FootstepConfig_NoRegister()
	{
		return UDA_AGR_FootstepConfig::StaticClass();
	}
	struct Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sounds_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Sounds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Sounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particles_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Particles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Particles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Concurrency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetFoostepSettings, "GetFoostepSettings" }, // 2905023157
		{ &Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetSurfaceReaction, "GetSurfaceReaction" }, // 3877112168
		{ &Z_Construct_UFunction_UDA_AGR_FootstepConfig_GetVelocityRange, "GetVelocityRange" }, // 475348123
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/DA_AGR_FootstepConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MinVelocity_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_AGR_FootstepConfig, MinVelocity), METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MinVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MinVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_AGR_FootstepConfig, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MaxVelocity_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_ValueProp = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_Key_KeyProp = { "Sounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_AGR_FootstepConfig, Sounds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_ValueProp = { "Particles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_Key_KeyProp = { "Particles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_AGR_FootstepConfig, Particles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_AGR_FootstepConfig, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Attenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Data/DA_AGR_FootstepConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_AGR_FootstepConfig, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Concurrency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MinVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_MaxVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Sounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Particles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::NewProp_Concurrency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_AGR_FootstepConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::ClassParams = {
		&UDA_AGR_FootstepConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDA_AGR_FootstepConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDA_AGR_FootstepConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDA_AGR_FootstepConfig, 1404469463);
	template<> AGRPRO_API UClass* StaticClass<UDA_AGR_FootstepConfig>()
	{
		return UDA_AGR_FootstepConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDA_AGR_FootstepConfig(Z_Construct_UClass_UDA_AGR_FootstepConfig, &UDA_AGR_FootstepConfig::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UDA_AGR_FootstepConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_AGR_FootstepConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
