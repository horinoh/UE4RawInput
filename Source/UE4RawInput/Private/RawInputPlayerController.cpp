// Fill out your copyright notice in the Description page of Project Settings.

#include "RawInputPlayerController.h"

#include "DrawDebugHelpers.h"

void ARawInputPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (nullptr != InputComponent)
	{
#define AXIS(no) InputComponent->BindAxis("GeneUSBAxis"#no, this, &ARawInputPlayerController::GeneUSBAxis##no)
		AXIS(01); AXIS(02); AXIS(03); AXIS(04); AXIS(05); AXIS(06); AXIS(07); AXIS(08);
#undef AXIS

#define BUTTON(no) InputComponent->BindAction("GeneUSBButton"#no, IE_Pressed, this, &ARawInputPlayerController::GeneUSBButton##no)
		BUTTON(01); BUTTON(02); BUTTON(03); BUTTON(04); BUTTON(05); BUTTON(06); BUTTON(07); BUTTON(08); BUTTON(09); BUTTON(10);
		BUTTON(01); BUTTON(12); BUTTON(13); BUTTON(14); BUTTON(15); BUTTON(16); BUTTON(17); BUTTON(18); BUTTON(19); BUTTON(20);
#undef BUTTON
	}
}

void ARawInputPlayerController::GeneUSBAxis(int No, float Value)
{
	const auto Offset = 16.0f, Base = 0.0f;
	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(0, Base + No * Offset, WorldLoc, WorldDir))
	{
		DrawDebugString(InputComponent->GetWorld(), WorldLoc, FString::Printf(TEXT("Axis%02d : %f"), No, Value), nullptr, FColor::White, 0.0f);
	}
}
void ARawInputPlayerController::GeneUSBButton(int No)
{
	const auto Offset = 16.0f, Base = Offset * 10;
	FVector WorldLoc, WorldDir;
	if(DeprojectScreenPositionToWorld(0, Base + No * Offset, WorldLoc, WorldDir))
	{
		DrawDebugString(InputComponent->GetWorld(), WorldLoc, FString::Printf(TEXT("Button%02d"), No), nullptr, FColor::White, 0.0f);
	}
}
