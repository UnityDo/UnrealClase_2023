// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../PoderInterface.h"
#include "UObject/NoExportTypes.h"
#include "Poder.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Category = "Item")
class TIPODIABLO_API UPoder : public UObject, public IPoderInterface
{
	GENERATED_BODY()
public:
	void ActivarPoder_Implementation(ACharacter* CharacterRef) override;
};
