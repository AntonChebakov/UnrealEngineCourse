// Fill out your copyright notice in the Description page of Project Settings.


#include "ASAttachmentComponent.h"


void UASAttachmentComponent::ChangeClipByGameplayTag(FGameplayTag NewClip)
{
	for (const auto& Clip : ClipAttachments)
	{
		Manager.RequestAsyncLoad(Clip.Value.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &ThisClass::OnLoad,Clip.Value,NewClip,ETypeAttachment::Clip ));
	}
}

void UASAttachmentComponent::ChangeMuzzleByGameplayTag(FGameplayTag NewMuzzle)
{
	for (const auto& Muzzle : MuzzleAttachments)
	{
		Manager.RequestAsyncLoad(Muzzle.Value.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &ThisClass::OnLoad,Muzzle.Value,NewMuzzle,ETypeAttachment::Clip ));
	}
}

void UASAttachmentComponent::ChangeGripByGameplayTag(FGameplayTag NewGrip)
{
	for (const auto& Grip : GripAttachments)
	{
		Manager.RequestAsyncLoad(Grip.Value.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &ThisClass::OnLoad,Grip.Value,NewGrip,ETypeAttachment::Clip ));
	}
}

void UASAttachmentComponent::ChangeSightByGameplayTag(FGameplayTag NewSight)
{
	for (const auto& Sight : SightAttachments)
	{
		Manager.RequestAsyncLoad(Sight.Value.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &ThisClass::OnLoad,Sight.Value,NewSight,ETypeAttachment::Clip ));
	}
}

void UASAttachmentComponent::ChangeOtherByGameplayTag(FGameplayTag NewOther)
{
	for (const auto& Other : OtherAttachments)
	{
		Manager.RequestAsyncLoad(Other.Value.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &ThisClass::OnLoad,Other.Value,NewOther,ETypeAttachment::Clip ));
	}
}

void UASAttachmentComponent::OnLoad(TSoftClassPtr<AASAttachment> AttachmentRef, FGameplayTag AttachmentTag,
	ETypeAttachment AttachmentType)
{
}

void UASAttachmentComponent::OnLoadByKey(TSoftClassPtr<AASAttachment>* AttachmentPtr, ETypeAttachment AttachmentType)
{
}

void UASAttachmentComponent::DestroyCurrentAttachment(ETypeAttachment TypeAttachment)
{
}

AASAttachment* UASAttachmentComponent::ChangeAttachment(FName Attachmentname,
	const TSoftClassPtr<AASAttachment>& AttachmentSoftRef) const
{
}

// Sets default values for this component's properties
UASAttachmentComponent::UASAttachmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	WeaponMesh = nullptr;
}


// Called when the game starts
void UASAttachmentComponent::BeginPlay()
{
	Super::BeginPlay();
	WeaponMesh = Cast<USkeletalMeshComponent>(GetOwner()->GetComponentByClass(USkeletalMeshComponent::StaticClass()));
}


// Called every frame
void UASAttachmentComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

