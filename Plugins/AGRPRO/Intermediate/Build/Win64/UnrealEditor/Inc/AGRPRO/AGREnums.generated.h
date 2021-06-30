// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGRPRO_AGREnums_generated_h
#error "AGREnums.generated.h already included, missing '#pragma once' in AGREnums.h"
#endif
#define AGRPRO_AGREnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gasagr_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGREnums_h


#define FOREACH_ENUM_EROTATIONMETHOD(op) \
	op(ERotationMethod::NONE) \
	op(ERotationMethod::RotateToVelocity) \
	op(ERotationMethod::AbsoluteRotation) \
	op(ERotationMethod::DesiredRotation) \
	op(ERotationMethod::DesiredAtAngle) 

enum class ERotationMethod : uint8;
template<> AGRPRO_API UEnum* StaticEnum<ERotationMethod>();

#define FOREACH_ENUM_EAIMOFFSETS(op) \
	op(EAimOffsets::NONE) \
	op(EAimOffsets::Aim) \
	op(EAimOffsets::Look) 

enum class EAimOffsets : uint8;
template<> AGRPRO_API UEnum* StaticEnum<EAimOffsets>();

#define FOREACH_ENUM_EAIMOFFSETCLAMP(op) \
	op(EAimOffsetClamp::Nearest) \
	op(EAimOffsetClamp::Left) \
	op(EAimOffsetClamp::Right) 

enum class EAimOffsetClamp : uint8;
template<> AGRPRO_API UEnum* StaticEnum<EAimOffsetClamp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
