// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPrueba.generated.h"


USTRUCT(BlueprintType)
struct FPunto
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Punto")
		float x;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Punto")
		float y;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Punto")
		float z;
};

UCLASS()
class TIPODIABLO_API AActorPrueba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorPrueba();

		UPROPERTY(EditAnywhere, Category = "Vidas")
		float numeroDecimal = 0.12321f;
	// numero decimal con mas decimales
	UPROPERTY(EditAnywhere, Category = "Vidas")
	double numeroDecimalCOnmuchodecimal = 0.012121223123;
	//bool para verdadero o falso
	UPROPERTY(EditAnywhere, Category = "Vidas")
	bool bEstaVivo = true;
	UPROPERTY(EditAnywhere, Category = "Vidas")
	FName Nombre;
	UPROPERTY(EditAnywhere, Category = "Vidas")
	FString TeaFriendlyName=TEXT("Hola");
UPROPERTY(EditAnywhere, Category = "Vidas")
	FText Texto;
UPROPERTY(EditAnywhere, Category = "Vidas")
AActor *Padre;

UPROPERTY(EditAnywhere, Category = "Vidas")
bool bVivo = true;

//matriz de numeros
UPROPERTY(EditAnywhere, Category = "Vidas")
TArray<int32> Numeros = { 0,1,2,3 };
UPROPERTY(EditAnywhere, Category = "Vidas")
TMap<FString, FString> FruitMap;

UFUNCTION(BlueprintCallable)
void SacaMensajeHola();

UFUNCTION(BlueprintCallable)
//devuelve un int32 con el resultado de la operacion
int32 Suma(int32 numero1, int32 numero2);
UFUNCTION(BlueprintCallable)
void MayorQue(int32 numero1, int32 numero2);


UFUNCTION(BlueprintCallable)
FPunto CalculaPuntoMedio(FPunto puntoA, FPunto puntoB);

UFUNCTION(BlueprintCallable)
void LanzaDado();

UFUNCTION(BlueprintCallable)
void InvierteVida();

UFUNCTION(BlueprintCallable)
bool PuedeAtacar(bool bEstaCerca,bool bEsVivo);

UFUNCTION(BlueprintCallable)
bool DetectaJuagor(bool bTeve, bool bTeoye);

/**
* FunctionDescription....
* @param ParamName ParamDescription...
* @return ReturnDescription...
*/

//Sobrecargar una funcion, depende del numero de parametros o del tipo
void Sumar(int32 num1, int32 num2);


void Sumar(float num1, float num2);


void Sumar(int32 num1, int32 num2, int32 num3);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
