// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ReplayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class REPLAYSYSTEMDEMO_API UReplayGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UReplayGameInstance();

	//Name that we are saving our recording under
	UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString RecordingName;

	//Display Name (UI)
	UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString FriendlyRecordingName;

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StopRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartReplay();


	
};
