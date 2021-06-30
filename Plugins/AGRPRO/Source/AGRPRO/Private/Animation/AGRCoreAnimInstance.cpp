// Copyright 2021 Adam Grodzki All Rights Reserved.

#include "Animation/AGRCoreAnimInstance.h"

#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"

UAGRCoreAnimInstance::UAGRCoreAnimInstance(const FObjectInitializer& ObjectInitializer)
	: UAnimInstance(ObjectInitializer)
{
	TargetFrameRate = 60.0f;
	LeanSmooth = 6.0f;
	AimSmooth = 6.0f;
}

void UAGRCoreAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	RecastOwnerComponents();
}

void UAGRCoreAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	DeltaTick = DeltaSeconds;

	GetComponentVariables();
	SetMovementVectorsAndStates();
	SetupLeaning();
	SetupAimOffset();
	SetupMovementStates();
}

void UAGRCoreAnimInstance::RecastOwnerComponents()
{
	OwningCharacter = Cast<ACharacter>(TryGetPawnOwner());
	if(OwningCharacter)
	{
		OwnerMovementComponent = OwningCharacter->GetCharacterMovement();
		AnimMasterComponent = Cast<UAGRAnimMasterComponent>(OwningCharacter->GetComponentByClass(UAGRAnimMasterComponent::StaticClass()));
	}
}

void UAGRCoreAnimInstance::GetComponentVariables()
{
	if(AnimMasterComponent)
	{
		ModificatonTags = AnimMasterComponent->AnimModTags;
		BasePose = AnimMasterComponent->BasePose;
		OverlayPose = AnimMasterComponent->OverlayPose;
		AimOffsetType = AnimMasterComponent->AimOffsetType;
		AimOffsetBehavior = AnimMasterComponent->AimOffsetBehavior;
		RawAimOffset = AnimMasterComponent->AimOffset;
		RotationMethod = AnimMasterComponent->RotationMethod;
		bFirstPerson = AnimMasterComponent->bFirstPerson;
		LookAtLocation = AnimMasterComponent->LookAtLocation;
		AimClamp = AnimMasterComponent->AimClamp;
	}
	else
	{
		RecastOwnerComponents();
	}
}

void UAGRCoreAnimInstance::SetMovementVectorsAndStates()
{
	if(TryGetPawnOwner())
	{
		Velocity = TryGetPawnOwner()->GetVelocity().Size();
		FRotator Rotation = TryGetPawnOwner()->GetActorRotation();

		UpVelocity = Rotation.UnrotateVector(TryGetPawnOwner()->GetVelocity()).Z;
		ForwardVelocity = Rotation.UnrotateVector(TryGetPawnOwner()->GetVelocity()).X;
		StrafeVelocity = Rotation.UnrotateVector(TryGetPawnOwner()->GetVelocity()).Y;
		bIdle = FMath::IsNearlyZero(Velocity);
		if(!bIdle)
		{
			Direction = CalculateDirection(TryGetPawnOwner()->GetVelocity(), TryGetPawnOwner()->GetActorRotation());
		}
		if(OwnerMovementComponent)
		{
			InputAcceleration = OwnerMovementComponent->GetCurrentAcceleration();
		}
	}
}

void UAGRCoreAnimInstance::SetupLeaning()
{
	if(TryGetPawnOwner())
	{
		FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(PreviousRotation, TryGetPawnOwner()->GetActorRotation());
		Lean = FMath::FInterpTo(Lean, NormalizeLean(Delta.Yaw),DeltaTick,LeanSmooth);
		PreviousRotation = TryGetPawnOwner()->GetActorRotation();
	}	
}

void UAGRCoreAnimInstance::SetupAimOffset()
{
	if(!TryGetPawnOwner())
	{
		return;
	}

	FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(RawAimOffset, TryGetPawnOwner()->GetActorRotation());
	const float Min = AimClamp * -1.0f;
	const float Max = AimClamp;

	float TargetX = TargetX = Delta.Yaw;
	const float TargetY = Delta.Pitch;

	if(!UKismetMathLibrary::InRange_FloatFloat(Delta.Yaw, Min, Max, true, true))
	{
		switch(AimOffsetBehavior)
		{
		case EAimOffsetClamp::Nearest:
			TargetX = FMath::Clamp(Delta.Yaw, Min, Max);
			break;

		case EAimOffsetClamp::Left:
			TargetX = Min;
			break;

		case EAimOffsetClamp::Right:
			TargetX = Max;
			break;

		default:
			checkNoEntry();
		}
	}

	FinalAimOffset = FMath::Vector2DInterpTo(FinalAimOffset, FVector2D(TargetX, TargetY),DeltaTick, AimSmooth);

	Delta = UKismetMathLibrary::NormalizedDeltaRotator(PreviousFrameAim,RawAimOffset);
	AimDelta = FMath::Vector2DInterpTo(AimDelta, FVector2D(NormalizeLean(Delta.Yaw), NormalizeLean(Delta.Pitch)), DeltaTick, LeanSmooth);
}

void UAGRCoreAnimInstance::SetupMovementStates()
{
	if(OwnerMovementComponent)
	{
		bFalling = OwnerMovementComponent->IsFalling();
		bCrouching = OwnerMovementComponent->IsCrouching();
		bFlying = OwnerMovementComponent->IsFlying();
		bSwimming = OwnerMovementComponent->IsSwimming();
		bWalkingState = OwnerMovementComponent->IsWalking();
		bGrounded = OwnerMovementComponent->IsMovingOnGround();
		bInAir = bFalling || bFlying;
		MovementMode = OwnerMovementComponent->MovementMode;
	}

	bStanding = IsStanding();
}

float UAGRCoreAnimInstance::NormalizeLean(float InValue)
{
	return  (InValue*(1.0/DeltaTick))/TargetFrameRate;	
}

bool UAGRCoreAnimInstance::IsStanding()
{
	return !bCrouching;
}
