// Fill out your copyright notice in the Description page of Project Settings.


#include "AdminPlayerController.h"
#include "JumboCameraActor.h"
#include "Kismet/GameplayStatics.h"


AAdminPlayerController::AAdminPlayerController()
{
	isBirdView = false;
}

void AAdminPlayerController::SwitchToBirdView(bool birdView)
{
	if (!birdView)
	{
		UWorld* World = GetWorld();
		TSubclassOf<AJumboCameraActor> JumboCameraActorClass = AJumboCameraActor::StaticClass();
		AJumboCameraActor* JumboCameraActor = Cast<AJumboCameraActor>(UGameplayStatics::GetActorOfClass(GetWorld(), JumboCameraActorClass));

		SetViewTargetWithBlend(JumboCameraActor, 1.f);
	}
	else {
		APawn* PlayerPawn = GetPawn();
		SetViewTargetWithBlend(PlayerPawn, 1.f);
	}
}

void AAdminPlayerController::ToggleToBirdView()
{
	isBirdView = !isBirdView;
	SwitchToBirdView(isBirdView);
}
