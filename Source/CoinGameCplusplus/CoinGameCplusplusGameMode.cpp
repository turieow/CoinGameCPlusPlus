// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoinGameCplusplusGameMode.h"
#include "CoinGameCplusplusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoinGameCplusplusGameMode::ACoinGameCplusplusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
