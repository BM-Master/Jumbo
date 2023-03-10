// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AdminPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class JUMBO_API AAdminPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAdminPlayerController();
private:

	UPROPERTY()
	bool isBirdView;

	void SwitchToBirdView(bool birdView);

public:
	UFUNCTION(BlueprintCallable)
	void ToggleToBirdView();
};
