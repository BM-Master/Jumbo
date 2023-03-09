// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Camara.generated.h"

/**
 * 
 */
UCLASS()
class ACamara : public ACameraActor
{
	GENERATED_BODY()


public:
	ACamara();

public:
	UFUNCTION(BlueprintCallable)
	void AttatchCameraToCharacter(AJumboCharacter* JumboCharacter);

};
