// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplaySystem/ReplayGameInstance.h"

UReplayGameInstance::UReplayGameInstance()
{
	RecordingName = "MyReplay";
	FriendlyRecordingName = "My Replay";
}

void UReplayGameInstance::StartRecording()
{
	//Start recording
	StartRecordingReplay(RecordingName, FriendlyRecordingName); //By leaving URL parameters empty, it will default to the local file streamer
}

void UReplayGameInstance::StopRecording()
{
	StopRecordingReplay();
}

void UReplayGameInstance::StartReplay()
{
	PlayReplay(RecordingName, nullptr);
}
