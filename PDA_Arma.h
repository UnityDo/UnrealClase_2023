// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Colocable.h"
#include "PDA_Arma.generated.h"


UENUM(BlueprintType)
enum class ETipoMano : uint8 {
	UnaMano UMETA(DisplayName = "UnaMano"),
	DosManos UMETA(DisplayName = "DosManos")
};
UENUM(BlueprintType)
enum class ETipoRango : uint8 {
	Melee UMETA(DisplayName = "Melee"),
	Distancia UMETA(DisplayName = "Distancia")
};
/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Arma : public UPDA_Colocable
{
	GENERATED_BODY()
	
	//Requerimientos
		//Unos minimos
public :
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		int32 FueMin = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		int32 DesMin = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		int32 ConsMin = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		int32 Danio = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		int32 Resistencia = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		ETipoMano tipomano;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arma")
		ETipoRango tiporango;

};
