// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "MCharacter.generated.h"

UCLASS()
class ZOFIHIT_API AMCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly,EditAnywhere) UCameraComponent* CameraComponent;
	UPROPERTY(BlueprintReadOnly,EditAnywhere) USkeletalMeshComponent* CharecterMesh;

	UPROPERTY(BlueprintReadWrite,EditAnywhere) USkeletalMesh* SM_CharecterMesh;

	UPROPERTY(BlueprintReadWrite,EditAnywhere) UInputMappingContext* IMC_Locomotion;
	UPROPERTY(BlueprintReadWrite,EditAnywhere) UInputAction* IA_Move;
	UPROPERTY(BlueprintReadWrite,EditAnywhere) UInputAction* IA_Look;

public:
	// Sets default values for this character's properties
	AMCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void OnMovePressed(const FInputActionValue& InputActionValue);
	void OnLook(const FInputActionValue& InputActionValue);
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
