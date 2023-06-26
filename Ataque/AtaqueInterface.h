// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AtaqueInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UAtaqueInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TIPODIABLO_API IAtaqueInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ataca")
		void Ataca(ACharacter* CharacterRef);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ataca")
		float GetDuracion();
};
