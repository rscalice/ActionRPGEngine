// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionRPGCharacter.h"

// Sets default values
AActionRPGCharacter::AActionRPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	BaseActorAttributes = CreateDefaultSubobject<UBaseActorAttributes>("BaseAttributeSet");

	if (IsValid(AbilitySystemComponent))
	{
		AbilitySystemComponent->SetIsReplicated(true);
	}
}

// Called when the game starts or when spawned
void AActionRPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(AbilitySystemComponent))
	{
		BaseActorAttributes = AbilitySystemComponent->GetSet<UBaseActorAttributes>();
	}
}

// Called every frame
void AActionRPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AActionRPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

