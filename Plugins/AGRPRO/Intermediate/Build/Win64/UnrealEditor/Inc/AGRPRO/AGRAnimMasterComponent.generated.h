// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
enum class EAimOffsets : uint8;
enum class EAimOffsetClamp : uint8;
enum class ERotationMethod : uint8;
struct FGameplayTag;
#ifdef AGRPRO_AGRAnimMasterComponent_generated_h
#error "AGRAnimMasterComponent.generated.h already included, missing '#pragma once' in AGRAnimMasterComponent.h"
#endif
#define AGRPRO_AGRAnimMasterComponent_generated_h

#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_12_DELEGATE \
struct _Script_AGRPRO_eventOnFirstPerson_Parms \
{ \
	bool bIsFirstPersonView; \
}; \
static inline void FOnFirstPerson_DelegateWrapper(const FMulticastScriptDelegate& OnFirstPerson, bool bIsFirstPersonView) \
{ \
	_Script_AGRPRO_eventOnFirstPerson_Parms Parms; \
	Parms.bIsFirstPersonView=bIsFirstPersonView ? true : false; \
	OnFirstPerson.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_SPARSE_DATA
#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_RPC_WRAPPERS \
	virtual void NetMutiSetLookAt_Implementation(FVector LookAt); \
	virtual void ServerSetLookAt_Implementation(FVector LookAt); \
	virtual void NetMutiSetAimOffset_Implementation(FRotator InAimOffset); \
	virtual void ServerSetAimOffset_Implementation(FRotator InAimOffset); \
	virtual void ServerSetupAimOffset_Implementation(EAimOffsets InAimOffsetType, EAimOffsetClamp InAimBehavior); \
	virtual void ServerSetRotation_Implementation(ERotationMethod InRotationMethod, float InRotationSpeed, float InTurnStartAngle, float InTurnStopTolerance); \
	virtual void ServerSetOverlayPose_Implementation(FGameplayTag InOverlayPose); \
	virtual void ServerSetBasePose_Implementation(FGameplayTag InBasePose); \
 \
	DECLARE_FUNCTION(execNetMutiSetLookAt); \
	DECLARE_FUNCTION(execServerSetLookAt); \
	DECLARE_FUNCTION(execNetMutiSetAimOffset); \
	DECLARE_FUNCTION(execServerSetAimOffset); \
	DECLARE_FUNCTION(execServerSetupAimOffset); \
	DECLARE_FUNCTION(execServerSetRotation); \
	DECLARE_FUNCTION(execServerSetOverlayPose); \
	DECLARE_FUNCTION(execServerSetBasePose); \
	DECLARE_FUNCTION(execOnRep_RotationSpeed); \
	DECLARE_FUNCTION(execOnRep_RotationMethod); \
	DECLARE_FUNCTION(execTurnInPlaceTick); \
	DECLARE_FUNCTION(execAimTick); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execSetupAimOffset); \
	DECLARE_FUNCTION(execSetupRotation); \
	DECLARE_FUNCTION(execSetupFpp); \
	DECLARE_FUNCTION(execSetOverlayPose); \
	DECLARE_FUNCTION(execSetupBasePose);


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMutiSetLookAt_Implementation(FVector LookAt); \
	virtual void ServerSetLookAt_Implementation(FVector LookAt); \
	virtual void NetMutiSetAimOffset_Implementation(FRotator InAimOffset); \
	virtual void ServerSetAimOffset_Implementation(FRotator InAimOffset); \
	virtual void ServerSetupAimOffset_Implementation(EAimOffsets InAimOffsetType, EAimOffsetClamp InAimBehavior); \
	virtual void ServerSetRotation_Implementation(ERotationMethod InRotationMethod, float InRotationSpeed, float InTurnStartAngle, float InTurnStopTolerance); \
	virtual void ServerSetOverlayPose_Implementation(FGameplayTag InOverlayPose); \
	virtual void ServerSetBasePose_Implementation(FGameplayTag InBasePose); \
 \
	DECLARE_FUNCTION(execNetMutiSetLookAt); \
	DECLARE_FUNCTION(execServerSetLookAt); \
	DECLARE_FUNCTION(execNetMutiSetAimOffset); \
	DECLARE_FUNCTION(execServerSetAimOffset); \
	DECLARE_FUNCTION(execServerSetupAimOffset); \
	DECLARE_FUNCTION(execServerSetRotation); \
	DECLARE_FUNCTION(execServerSetOverlayPose); \
	DECLARE_FUNCTION(execServerSetBasePose); \
	DECLARE_FUNCTION(execOnRep_RotationSpeed); \
	DECLARE_FUNCTION(execOnRep_RotationMethod); \
	DECLARE_FUNCTION(execTurnInPlaceTick); \
	DECLARE_FUNCTION(execAimTick); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execSetupAimOffset); \
	DECLARE_FUNCTION(execSetupRotation); \
	DECLARE_FUNCTION(execSetupFpp); \
	DECLARE_FUNCTION(execSetOverlayPose); \
	DECLARE_FUNCTION(execSetupBasePose);


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_EVENT_PARMS \
	struct AGRAnimMasterComponent_eventNetMutiSetAimOffset_Parms \
	{ \
		FRotator InAimOffset; \
	}; \
	struct AGRAnimMasterComponent_eventNetMutiSetLookAt_Parms \
	{ \
		FVector LookAt; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetAimOffset_Parms \
	{ \
		FRotator InAimOffset; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetBasePose_Parms \
	{ \
		FGameplayTag InBasePose; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetLookAt_Parms \
	{ \
		FVector LookAt; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetOverlayPose_Parms \
	{ \
		FGameplayTag InOverlayPose; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetRotation_Parms \
	{ \
		ERotationMethod InRotationMethod; \
		float InRotationSpeed; \
		float InTurnStartAngle; \
		float InTurnStopTolerance; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetupAimOffset_Parms \
	{ \
		EAimOffsets InAimOffsetType; \
		EAimOffsetClamp InAimBehavior; \
	};


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_CALLBACK_WRAPPERS
#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGRAnimMasterComponent(); \
	friend struct Z_Construct_UClass_UAGRAnimMasterComponent_Statics; \
public: \
	DECLARE_CLASS(UAGRAnimMasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRAnimMasterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BasePose=NETFIELD_REP_START, \
		OverlayPose, \
		AnimModTags, \
		RotationMethod, \
		RotationSpeed, \
		TurnStartAngle, \
		TurnStopTolerance, \
		AimOffsetType, \
		AimOffsetBehavior, \
		NETFIELD_REP_END=AimOffsetBehavior	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAGRAnimMasterComponent(); \
	friend struct Z_Construct_UClass_UAGRAnimMasterComponent_Statics; \
public: \
	DECLARE_CLASS(UAGRAnimMasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRAnimMasterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BasePose=NETFIELD_REP_START, \
		OverlayPose, \
		AnimModTags, \
		RotationMethod, \
		RotationSpeed, \
		TurnStartAngle, \
		TurnStopTolerance, \
		AimOffsetType, \
		AimOffsetBehavior, \
		NETFIELD_REP_END=AimOffsetBehavior	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGRAnimMasterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGRAnimMasterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRAnimMasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRAnimMasterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRAnimMasterComponent(UAGRAnimMasterComponent&&); \
	NO_API UAGRAnimMasterComponent(const UAGRAnimMasterComponent&); \
public:


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRAnimMasterComponent(UAGRAnimMasterComponent&&); \
	NO_API UAGRAnimMasterComponent(const UAGRAnimMasterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRAnimMasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRAnimMasterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGRAnimMasterComponent)


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_14_PROLOG \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_EVENT_PARMS


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_SPARSE_DATA \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_RPC_WRAPPERS \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_CALLBACK_WRAPPERS \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_INCLASS \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_SPARSE_DATA \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_CALLBACK_WRAPPERS \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_INCLASS_NO_PURE_DECLS \
	gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGRAnimMasterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
