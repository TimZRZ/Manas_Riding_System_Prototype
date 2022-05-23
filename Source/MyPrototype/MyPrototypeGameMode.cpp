// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyPrototypeGameMode.h"
#include "MyPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyPrototypeGameMode::AMyPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
