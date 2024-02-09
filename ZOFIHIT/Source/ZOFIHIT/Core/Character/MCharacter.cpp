// Fill out your copyright notice in the Description page of Project Settings.


#include "MCharacter.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AMCharacter::AMCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(0, 0, 60));
	CameraComponent->bUsePawnControlRotation = true;

	SM_CharecterMesh = Cast<USkeletalMesh>(StaticLoadObject(USkeletalMesh::StaticClass(), NULL, TEXT("C:/Users/KTS-WS-2312U/Documents/Unreal Projects/ZOFIHITrep/ZOFIHIT/Content/ZOFIHIT/Assets/SkelitonMeshes/FirstPersonArms/Character/Mesh/SK_Mannequin_Arms.uasset")));

	CharecterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharecterMesh"));
	CharecterMesh->SetRelativeLocation(FVector(-5, 0, -151));
	CharecterMesh->SetRelativeRotation(FRotator(0, -90, 0));
	CharecterMesh->SetupAttachment(CameraComponent);

	if (SM_CharecterMesh)
		CharecterMesh->SetSkeletalMesh(SM_CharecterMesh);
	 
}

// Called when the game starts or when spawned
void AMCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

