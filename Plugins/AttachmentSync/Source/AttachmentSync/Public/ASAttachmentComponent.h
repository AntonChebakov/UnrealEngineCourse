// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ASAttachment.h"
#include "Engine/StreamableManager.h"
#include "ASAttachmentComponent.generated.h"

UENUM(BlueprintType)
enum class ETypeAttachment : uint8
{
	Clip	 UMETA(DisplayName = "Clip"),
	Muzzle	 UMETA(DisplayName = "Muzzle"),
	Grip	 UMETA(DisplayName = "Grip"),
	Sight	 UMETA(DisplayName = "Sight"),
	Other	 UMETA(DisplayName = "Other"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttachmentAdded, FAttachmentInfo, AttachmentInfo, FGameplayTag, AttachmentGameplayTag,
	ETypeAttachment, AttachmentTypr);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttachmentRemoved, FAttachmentInfo, AttachmentInfo, FGameplayTag, AttachmentGameplayTag,
	ETypeAttachment, AttachmentTypr);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ATTACHMENTSYNC_API UASAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()
	
	UPROPERTY()
	TObjectPtr<class USkeletalMeshComponent> WeaponMesh;
	FStreamableManager Manager;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AttachmentName", meta = (AllowPrivateAccess = "true"))
	FName ClipSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AttachmentName", meta = (AllowPrivateAccess = "true"))
	FName MuzzleSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AttachmentName", meta = (AllowPrivateAccess = "true"))
	FName GripSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AttachmentName", meta = (AllowPrivateAccess = "true"))
	FName SightSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AttachmentName", meta = (AllowPrivateAccess = "true"))
	FName OtherSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AASAttachment> EquippedClip;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AASAttachment> EquippedMuzzle;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AASAttachment> EquippedGrip;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AASAttachment> EquippedSight;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AASAttachment> EquippedOther;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TMap<FName, TSoftClassPtr<AASAttachment>> ClipAttachments;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TMap<FName, TSoftClassPtr<AASAttachment>> MuzzleAttachments;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TMap<FName, TSoftClassPtr<AASAttachment>> GripAttachments;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TMap<FName, TSoftClassPtr<AASAttachment>> SightAttachments;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	TMap<FName, TSoftClassPtr<AASAttachment>> OtherAttachments;

	UFUNCTION(BlueprintCallable, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	void ChangeClipByGameplayTag(FGameplayTag NewClip);
	UFUNCTION(BlueprintCallable, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	void ChangeMuzzleByGameplayTag(FGameplayTag NewMuzzle);
	UFUNCTION(BlueprintCallable, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	void ChangeGripByGameplayTag(FGameplayTag NewGrip);
	UFUNCTION(BlueprintCallable, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	void ChangeSightByGameplayTag(FGameplayTag NewSight);
	UFUNCTION(BlueprintCallable, Category = "Attachment", meta = (AllowPrivateAccess = "true"))
	void ChangeOtherByGameplayTag(FGameplayTag NewOther);

	void OnLoad(TSoftClassPtr<AASAttachment> AttachmentRef, FGameplayTag AttachmentTag, ETypeAttachment AttachmentType);
	void OnLoadByKey(TSoftClassPtr<AASAttachment>* AttachmentPtr, ETypeAttachment AttachmentType);
	
	UPROPERTY(BlueprintAssignable)
	FOnAttachmentAdded OnAttachmentAdded;
	UPROPERTY(BlueprintAssignable)
	FOnAttachmentRemoved OnAttachmentRemoved;

	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE AASAttachment* GetCurrentAttachmentClip() const { return EquippedClip; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE AASAttachment* GetCurrentMuzzle() const { return EquippedMuzzle; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE AASAttachment* GetCurrentGrip() const { return EquippedGrip; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE AASAttachment* GetCurrentSight() const { return EquippedSight; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE AASAttachment* GetCurrentOther() const { return EquippedOther; }

	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE TMap<FName, TSoftClassPtr<AASAttachment>> GetAllCurrentAttachmentClip() const { return ClipAttachments; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE TMap<FName, TSoftClassPtr<AASAttachment>> GetAllCurrentAttachmentMuzzle() const { return MuzzleAttachments; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE TMap<FName, TSoftClassPtr<AASAttachment>> GetAllCurrentAttachmentGrip() const { return GripAttachments; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE TMap<FName, TSoftClassPtr<AASAttachment>> GetAllCurrentAttachmentSight() const { return SightAttachments; }
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	FORCEINLINE TMap<FName, TSoftClassPtr<AASAttachment>> GetAllCurrentAttachmentOther() const { return OtherAttachments; }

	UFUNCTION(BlueprintCallable, Category = "Attachment")
	void DestroyCurrentAttachment(ETypeAttachment TypeAttachment);
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	AASAttachment* ChangeAttachment(FName Attachmentname, const TSoftClassPtr<AASAttachment>& AttachmentSoftRef) const;

public:
	// Sets default values for this component's properties
	UASAttachmentComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
