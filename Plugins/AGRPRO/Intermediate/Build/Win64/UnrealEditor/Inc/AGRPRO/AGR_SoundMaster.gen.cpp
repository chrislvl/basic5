// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Components/AGR_SoundMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_SoundMaster() {}
// Cross Module References
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_SoundMaster_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_SoundMaster();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	AGRPRO_API UClass* Z_Construct_UClass_UDA_AGR_FootstepConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventCharacterMadeFootstepSound_Parms
		{
			FHitResult HitEvent;
			float VolumeMulti;
			UAudioComponent* Sound;
			UNiagaraSystem* Particle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMulti;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_HitEvent = { "HitEvent", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventCharacterMadeFootstepSound_Parms, HitEvent), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_VolumeMulti = { "VolumeMulti", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventCharacterMadeFootstepSound_Parms, VolumeMulti), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Sound_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventCharacterMadeFootstepSound_Parms, Sound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventCharacterMadeFootstepSound_Parms, Particle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_HitEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_VolumeMulti,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "CharacterMadeFootstepSound__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventCharacterMadeFootstepSound_Parms), Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAGR_SoundMaster::execOverwritePickSurface)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_InSurface);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverwritePickSurface_Implementation((TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_InSurface),(TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_OutSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_SoundMaster::execOverwriteParticleScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->OverwriteParticleScale_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_SoundMaster::execOverwriteCalcVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->OverwriteCalcVolume_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_SoundMaster::execTestAllFeetForCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestAllFeetForCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_SoundMaster::execFootstepEffect)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_OBJECT_REF(UAudioComponent,Z_Param_Out_Sound);
		P_GET_OBJECT_REF(UNiagaraSystem,Z_Param_Out_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FootstepEffect(Z_Param_Out_Hit,Z_Param_Out_Sound,Z_Param_Out_Particle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_SoundMaster::execTryTraceFootstep)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryTraceFootstep(Z_Param_Key);
		P_NATIVE_END;
	}
	static FName NAME_UAGR_SoundMaster_OverwriteCalcVolume = FName(TEXT("OverwriteCalcVolume"));
	float UAGR_SoundMaster::OverwriteCalcVolume() const
	{
		AGR_SoundMaster_eventOverwriteCalcVolume_Parms Parms;
		const_cast<UAGR_SoundMaster*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAGR_SoundMaster_OverwriteCalcVolume),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAGR_SoundMaster_OverwriteParticleScale = FName(TEXT("OverwriteParticleScale"));
	FVector UAGR_SoundMaster::OverwriteParticleScale() const
	{
		AGR_SoundMaster_eventOverwriteParticleScale_Parms Parms;
		const_cast<UAGR_SoundMaster*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAGR_SoundMaster_OverwriteParticleScale),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAGR_SoundMaster_OverwritePickSurface = FName(TEXT("OverwritePickSurface"));
	void UAGR_SoundMaster::OverwritePickSurface(TEnumAsByte<EPhysicalSurface> const& InSurface, TEnumAsByte<EPhysicalSurface>& OutSurface)
	{
		AGR_SoundMaster_eventOverwritePickSurface_Parms Parms;
		Parms.InSurface=InSurface;
		Parms.OutSurface=OutSurface;
		ProcessEvent(FindFunctionChecked(NAME_UAGR_SoundMaster_OverwritePickSurface),&Parms);
		OutSurface=Parms.OutSurface;
	}
	void UAGR_SoundMaster::StaticRegisterNativesUAGR_SoundMaster()
	{
		UClass* Class = UAGR_SoundMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FootstepEffect", &UAGR_SoundMaster::execFootstepEffect },
			{ "OverwriteCalcVolume", &UAGR_SoundMaster::execOverwriteCalcVolume },
			{ "OverwriteParticleScale", &UAGR_SoundMaster::execOverwriteParticleScale },
			{ "OverwritePickSurface", &UAGR_SoundMaster::execOverwritePickSurface },
			{ "TestAllFeetForCollision", &UAGR_SoundMaster::execTestAllFeetForCollision },
			{ "TryTraceFootstep", &UAGR_SoundMaster::execTryTraceFootstep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics
	{
		struct AGR_SoundMaster_eventFootstepEffect_Parms
		{
			FHitResult Hit;
			UAudioComponent* Sound;
			UNiagaraSystem* Particle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventFootstepEffect_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Sound_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventFootstepEffect_Parms, Sound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventFootstepEffect_Parms, Particle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Footstep" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_SoundMaster, nullptr, "FootstepEffect", nullptr, nullptr, sizeof(AGR_SoundMaster_eventFootstepEffect_Parms), Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventOverwriteCalcVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Footstep" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_SoundMaster, nullptr, "OverwriteCalcVolume", nullptr, nullptr, sizeof(AGR_SoundMaster_eventOverwriteCalcVolume_Parms), Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventOverwriteParticleScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Footstep" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_SoundMaster, nullptr, "OverwriteParticleScale", nullptr, nullptr, sizeof(AGR_SoundMaster_eventOverwriteParticleScale_Parms), Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSurface_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSurface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_InSurface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_InSurface = { "InSurface", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventOverwritePickSurface_Parms, InSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_InSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_InSurface_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_OutSurface = { "OutSurface", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventOverwritePickSurface_Parms, OutSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_InSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::NewProp_OutSurface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Footstep" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_SoundMaster, nullptr, "OverwritePickSurface", nullptr, nullptr, sizeof(AGR_SoundMaster_eventOverwritePickSurface_Parms), Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Footstep" },
		{ "Comment", "// Auto footstep placement\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
		{ "ToolTip", "Auto footstep placement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_SoundMaster, nullptr, "TestAllFeetForCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics
	{
		struct AGR_SoundMaster_eventTryTraceFootstep_Parms
		{
			FName Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_SoundMaster_eventTryTraceFootstep_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_SoundMaster_eventTryTraceFootstep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_SoundMaster_eventTryTraceFootstep_Parms), &Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Footstep" },
		{ "Comment", "// Trace by foot name\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
		{ "ToolTip", "Trace by foot name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_SoundMaster, nullptr, "TryTraceFootstep", nullptr, nullptr, sizeof(AGR_SoundMaster_eventTryTraceFootstep_Parms), Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGR_SoundMaster_NoRegister()
	{
		return UAGR_SoundMaster::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_SoundMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMadeFootstepSound_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CharacterMadeFootstepSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepSetup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FeetDefinitions_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FeetDefinitions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FeetDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlace_MetaData[];
#endif
		static void NewProp_bAutoPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeCycle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTimeCycle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoVolume_MetaData[];
#endif
		static void NewProp_bAutoVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAsCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAsCharacter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AutoFootstepsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFootstepsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoFootstepsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFoot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousFoot;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_SoundMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGR_SoundMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGR_SoundMaster_FootstepEffect, "FootstepEffect" }, // 2753950396
		{ &Z_Construct_UFunction_UAGR_SoundMaster_OverwriteCalcVolume, "OverwriteCalcVolume" }, // 2251628501
		{ &Z_Construct_UFunction_UAGR_SoundMaster_OverwriteParticleScale, "OverwriteParticleScale" }, // 2457763735
		{ &Z_Construct_UFunction_UAGR_SoundMaster_OverwritePickSurface, "OverwritePickSurface" }, // 648114221
		{ &Z_Construct_UFunction_UAGR_SoundMaster_TestAllFeetForCollision, "TestAllFeetForCollision" }, // 1898049198
		{ &Z_Construct_UFunction_UAGR_SoundMaster_TryTraceFootstep, "TryTraceFootstep" }, // 3738780029
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AGR" },
		{ "IncludePath", "Components/AGR_SoundMaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_CharacterMadeFootstepSound_MetaData[] = {
		{ "Category", "AGR|Footstep" },
		{ "Comment", "// variables\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
		{ "ToolTip", "variables" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_CharacterMadeFootstepSound = { "CharacterMadeFootstepSound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, CharacterMadeFootstepSound), Z_Construct_UDelegateFunction_AGRPRO_CharacterMadeFootstepSound__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_CharacterMadeFootstepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_CharacterMadeFootstepSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AGR|Foot step Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_SurfaceTraceLength_MetaData[] = {
		{ "Category", "AGR|Foot step Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_SurfaceTraceLength = { "SurfaceTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, SurfaceTraceLength), METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_SurfaceTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_SurfaceTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FootstepSetup_MetaData[] = {
		{ "Category", "AGR|Foot step Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FootstepSetup = { "FootstepSetup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, FootstepSetup), Z_Construct_UClass_UDA_AGR_FootstepConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FootstepSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FootstepSetup_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_ValueProp = { "FeetDefinitions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_Key_KeyProp = { "FeetDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_MetaData[] = {
		{ "Category", "AGR|Foot step Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions = { "FeetDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, FeetDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace_MetaData[] = {
		{ "Category", "AGR|Foot step AutoSetup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace_SetBit(void* Obj)
	{
		((UAGR_SoundMaster*)Obj)->bAutoPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace = { "bAutoPlace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_SoundMaster), &Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_MinTimeCycle_MetaData[] = {
		{ "Category", "AGR|Foot step AutoSetup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_MinTimeCycle = { "MinTimeCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, MinTimeCycle), METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_MinTimeCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_MinTimeCycle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume_MetaData[] = {
		{ "Category", "AGR|Foot step AutoSetup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume_SetBit(void* Obj)
	{
		((UAGR_SoundMaster*)Obj)->bAutoVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume = { "bAutoVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_SoundMaster), &Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_OwnerAsCharacter_MetaData[] = {
		{ "Category", "AGR|Internal" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_OwnerAsCharacter = { "OwnerAsCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, OwnerAsCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_OwnerAsCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_OwnerAsCharacter_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray_Inner = { "AutoFootstepsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray_MetaData[] = {
		{ "Category", "AGR|Internal" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray = { "AutoFootstepsArray", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, AutoFootstepsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_PreviousFoot_MetaData[] = {
		{ "Category", "AGR|Internal" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_PreviousFoot = { "PreviousFoot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, PreviousFoot), METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_PreviousFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_PreviousFoot_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "AGR|Global Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UAGR_SoundMaster*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_SoundMaster), &Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "AGR|Global Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((UAGR_SoundMaster*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_SoundMaster), &Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "AGR|Global Setup" },
		{ "ModuleRelativePath", "Public/Components/AGR_SoundMaster.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_SoundMaster, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_TraceChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGR_SoundMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_CharacterMadeFootstepSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_SurfaceTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FootstepSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_FeetDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_MinTimeCycle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bAutoVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_OwnerAsCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_AutoFootstepsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_PreviousFoot,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bDebug,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_SoundMaster_Statics::NewProp_TraceChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_SoundMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_SoundMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGR_SoundMaster_Statics::ClassParams = {
		&UAGR_SoundMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAGR_SoundMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_SoundMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_SoundMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_SoundMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_SoundMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_SoundMaster, 3068538439);
	template<> AGRPRO_API UClass* StaticClass<UAGR_SoundMaster>()
	{
		return UAGR_SoundMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_SoundMaster(Z_Construct_UClass_UAGR_SoundMaster, &UAGR_SoundMaster::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_SoundMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_SoundMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
