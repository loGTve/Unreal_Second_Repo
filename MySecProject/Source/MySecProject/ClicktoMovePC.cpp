// Fill out your copyright notice in the Description page of Project Settings.

#include "ClicktoMovePC.h"
#include <Blueprint/AIBlueprintHelperLibrary.h>

AClicktoMovePC::AClicktoMovePC()
{
	bShowMouseCursor = true;
}

void AClicktoMovePC::SetupInputComponent() {
	Super::SetupInputComponent();
	InputComponent->BindAction("LeftClick", IE_Pressed, this, &AClicktoMovePC::InputLeftMousePressed);
	InputComponent->BindAction("LeftClick", IE_Released, this, &AClicktoMovePC::InputLeftMouseReleased);
}

void AClicktoMovePC::InputLeftMousePressed()
{
	bClickLeftMouse = true;
}

void AClicktoMovePC::InputLeftMouseReleased()
{
	bClickLeftMouse = false;
}

void AClicktoMovePC::SetNewDestination(const FVector Destination)
{
	APawn* const MyPawn = GetPawn();

	if (MyPawn) {
		float const Distance = FVector::Dist(Destination, MyPawn->GetActorLocation());
		if (Distance > 120.0f) {
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Destination);
		}
	}
}

void AClicktoMovePC::MoveToMouse()
{
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit) {
		SetNewDestination(Hit.ImpactPoint);
	}
}

void AClicktoMovePC::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	if (bClickLeftMouse) {
		MoveToMouse();
	}
}