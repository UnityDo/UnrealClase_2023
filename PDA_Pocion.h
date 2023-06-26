// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Item.h"
#include "PDA_Pocion.generated.h"


UENUM(BlueprintType)
enum class ESize : uint8 {
	Little UMETA(DisplayName = "Little"),
	Medium UMETA(DisplayName = "Medium"),
	Big UMETA(DisplayName = "Big")
};

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Pocion : public UPDA_Item
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pocion")
	int32 PuntosRecuperacion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pocion")
		ESize size;
};
