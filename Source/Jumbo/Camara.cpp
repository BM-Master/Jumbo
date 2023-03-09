// Fill out your copyright notice in the Description page of Project Settings.


#include "Camara.h"
#include "JumboCharacter.h"
#include "Camera/CameraComponent.h"

ACamara::ACamara()
{
    int num = 1;
}

void ACamara::AttatchCameraToCharacter(AJumboCharacter* JumboCharacter)
{
    // Get the skeletal mesh component of the JumboCharacter
    USkeletalMeshComponent* SkeletalMesh = JumboCharacter->GetMesh();

    // Create a camera component and attach it to the JumboCharacter's skeletal mesh
    UCameraComponent* Camera = NewObject<UCameraComponent>(this, UCameraComponent::StaticClass());
    Camera->AttachToComponent(SkeletalMesh, FAttachmentTransformRules::KeepRelativeTransform);

    // Set the camera component as the root component of the CameraActor
    RootComponent = Camera;
}