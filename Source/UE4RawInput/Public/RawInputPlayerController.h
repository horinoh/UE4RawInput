// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RawInputPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UE4RAWINPUT_API ARawInputPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetupInputComponent() override;
	
	//!< GenericUSBController_Axis<N> と GenericUSBController_Button<N> のデバッグ表示用 (For debug display GenericUSBController_Axis<N> and GenericUSBController_Button<N>)
	void GeneUSBAxis(int No, float Value);
	void GeneUSBButton(int No);
	void GeneUSBAxis01(float Value) { GeneUSBAxis(1, Value); }
	void GeneUSBAxis02(float Value) { GeneUSBAxis(2, Value); }
	void GeneUSBAxis03(float Value) { GeneUSBAxis(3, Value); }
	void GeneUSBAxis04(float Value) { GeneUSBAxis(4, Value); }
	void GeneUSBAxis05(float Value) { GeneUSBAxis(5, Value); }
	void GeneUSBAxis06(float Value) { GeneUSBAxis(6, Value); }
	void GeneUSBAxis07(float Value) { GeneUSBAxis(7, Value); }
	void GeneUSBAxis08(float Value) { GeneUSBAxis(8, Value); }
	void GeneUSBButton01() { GeneUSBButton(1); }
	void GeneUSBButton02() { GeneUSBButton(2); }
	void GeneUSBButton03() { GeneUSBButton(3); }
	void GeneUSBButton04() { GeneUSBButton(4); }
	void GeneUSBButton05() { GeneUSBButton(5); }
	void GeneUSBButton06() { GeneUSBButton(6); }
	void GeneUSBButton07() { GeneUSBButton(7); }
	void GeneUSBButton08() { GeneUSBButton(8); }
	void GeneUSBButton09() { GeneUSBButton(9); }
	void GeneUSBButton10() { GeneUSBButton(10); }
	void GeneUSBButton11() { GeneUSBButton(11); }
	void GeneUSBButton12() { GeneUSBButton(12); }
	void GeneUSBButton13() { GeneUSBButton(13); }
	void GeneUSBButton14() { GeneUSBButton(14); }
	void GeneUSBButton15() { GeneUSBButton(15); }
	void GeneUSBButton16() { GeneUSBButton(16); }
	void GeneUSBButton17() { GeneUSBButton(17); }
	void GeneUSBButton18() { GeneUSBButton(18); }
	void GeneUSBButton19() { GeneUSBButton(19); }
	void GeneUSBButton20() { GeneUSBButton(20); }
};
