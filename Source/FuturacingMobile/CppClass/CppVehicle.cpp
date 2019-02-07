// Fill out your copyright notice in the Description page of Project Settings.

#include "CppVehicle.h"

// Sets default values
ACppVehicle::ACppVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACppVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

