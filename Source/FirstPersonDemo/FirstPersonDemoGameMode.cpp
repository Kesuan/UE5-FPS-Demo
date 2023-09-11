// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonDemoGameMode.h"
#include "FirstPersonDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPersonDemoGameMode::AFirstPersonDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
