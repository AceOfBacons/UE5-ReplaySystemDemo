// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplaySystemDemoGameMode.h"
#include "ReplaySystemDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReplaySystemDemoGameMode::AReplaySystemDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
