// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoinGameCPlusPlusGameMode.h"
#include "CoinGameCPlusPlusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoinGameCPlusPlusGameMode::ACoinGameCPlusPlusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
