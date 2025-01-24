// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS(Blueprintable)
class OTUSTHIRDPERSON_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

UFUNCTION(BlueprintCallable, Category = "Test")
	FVector GetSelectedActorLocation() const;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	AActor* SelectedActor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
