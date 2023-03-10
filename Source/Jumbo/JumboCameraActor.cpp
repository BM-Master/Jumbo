// Fill out your copyright notice in the Description page of Project Settings.


#include "JumboCameraActor.h"
#include "Camera/CameraComponent.h"

// Sets default values
AJumboCameraActor::AJumboCameraActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create the camera component
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    RootComponent = CameraComponent;

    // Set the camera properties for a bird's eye view
    CameraComponent->SetWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));
    CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 1000.0f));

}

// Called when the game starts or when spawned
void AJumboCameraActor::BeginPlay()
{
	Super::BeginPlay();

    SetReplicates(true);
    SetReplicateMovement(true);
}

// Called every frame
void AJumboCameraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

