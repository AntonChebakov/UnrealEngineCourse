// Copyright Epic Games, Inc. All Rights Reserved.

#include "OtusThirdPersonGameMode.h"
#include "OtusThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOtusThirdPersonGameMode::AOtusThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
