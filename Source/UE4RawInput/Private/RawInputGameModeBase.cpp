// Fill out your copyright notice in the Description page of Project Settings.

#include "RawInputGameModeBase.h"

#include "RawInputPlayerController.h"

ARawInputGameModeBase::ARawInputGameModeBase()
	: Super()
{
	PlayerControllerClass = ARawInputPlayerController::StaticClass();
}