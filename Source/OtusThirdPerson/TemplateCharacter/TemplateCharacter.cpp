// Fill out your copyright notice in the Description page of Project Settings.


#include "TemplateCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ATemplateCharacter::ATemplateCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));

}

// Called when the game starts or when spawned
void ATemplateCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATemplateCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATemplateCharacter::MoveForward(float val)
{
	if (Controller == nullptr || val == 0.f)
	{
		return;
	}

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, val);
}

void ATemplateCharacter::MoveRight(float val)
{
	if (Controller == nullptr || val == 0.f)
	{
		return;
	}

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, val);
}

void ATemplateCharacter::LookUp(float val)
{
	if (val == 0.f)
	{
		return;
	}
	AddControllerPitchInput(val);
}

void ATemplateCharacter::Turn(float val)
{
	if (val == 0.f)
	{
		return;
	}
	AddControllerYawInput(val);
}


