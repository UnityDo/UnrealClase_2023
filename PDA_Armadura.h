// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Colocable.h"
#include "PDA_Armadura.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Armadura : public UPDA_Colocable
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armadura")
		float BonusFue;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armadura")
			float BonusRest;

};
