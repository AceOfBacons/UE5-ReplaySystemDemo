// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplaySystem/ReplayPlayerController.h"
#include "Engine/World.h"
#include "Engine/DemoNetDriver.h"

void AReplayPlayerController::RestartRecording()
{
	if (UWorld* World = GetWorld()) 
	{
		if (UDemoNetDriver* DemoDriver = World->GetDemoNetDriver()) {
			DemoDriver->GotoTimeInSeconds(0.f);
		}
	}
}
