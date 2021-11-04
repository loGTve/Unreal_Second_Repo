// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClicktoMovePC.generated.h"

/**
 * 
 */
UCLASS()
class MYSECPROJECT_API AClicktoMovePC : public APlayerController
{
	GENERATED_BODY()
	
public:
	AClicktoMovePC();
	
private:
	bool bClickLeftMouse;

	void InputLeftMousePressed();

	void InputLeftMouseReleased();

	virtual void SetupInputComponent() override;

	void SetNewDestination(const FVector Destination);

	void MoveToMouse();

	virtual void PlayerTick(float DeltaTime) override;


};
