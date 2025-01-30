// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TemplateCharacter.generated.h"

UCLASS()
class OTUSTHIRDPERSON_API ATemplateCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATemplateCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	class USkeletalMeshComponent* Weapon;

	UPROPERTY(BlueprintReadOnly, Category = "AI")
	class AAIController* ControllerRef = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "AI")
	bool Dead = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	float Health = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	float BaseDamage = 0.01f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "AI")
	void MoveForward(float val);
	UFUNCTION(BlueprintCallable, Category = "AI")
	void MoveRight(float val);
	UFUNCTION(BlueprintCallable, Category = "AI")
	void LookUp(float val);
	UFUNCTION(BlueprintCallable, Category = "AI")
	void Turn(float val);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float TurnRate = 45.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float SprintSpeed = 400.0f;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
