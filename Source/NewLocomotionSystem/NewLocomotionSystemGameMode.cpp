// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewLocomotionSystemGameMode.h"
#include "NewLocomotionSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewLocomotionSystemGameMode::ANewLocomotionSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
