// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorPrueba.h"

// Sets default values
AActorPrueba::AActorPrueba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Añadir más frutas aquí
	FruitMap.Add(TEXT("Banana"), TEXT("Banana"));
	
	FruitMap.Add(TEXT("Manzana"), TEXT("Una fruta redonda y crujiente, de color rojo o verde"));
	
	FruitMap.Add(TEXT("Plátano"), TEXT("Una fruta amarilla y alargada, con sabor dulce"));
	FruitMap.Add(TEXT("Fresa"), TEXT("Una fruta pequeña y roja, con sabor dulce y ácido"));
	FruitMap.Add(TEXT("Naranja"), TEXT("Una fruta redonda y naranja, con sabor dulce y ácido"));
	/*
	FruitMap.Add(TEXT("Piña"), TEXT("Una fruta tropical de piel dura y escamosa, con sabor dulce y jugoso"));
	FruitMap.Add(TEXT("Mango"), TEXT("Una fruta tropical de piel suave y colorida, con sabor dulce y jugoso"));
	FruitMap.Add(TEXT("Kiwi"), TEXT("Una fruta pequeña y peluda, de color marrón y verde, con sabor dulce y ácido"));
	FruitMap.Add(TEXT("Melón"), TEXT("Una fruta grande y redonda, con piel dura y pulpa jugosa, de sabor dulce"));
	FruitMap.Add(TEXT("Sandía"), TEXT("Una fruta grande y ovalada, con piel verde y pulpa roja, de sabor dulce y refrescante"));
	FruitMap.Add(TEXT("Uva"), TEXT("Una fruta pequeña y redonda, de piel suave y sabor dulce"));*/
}

// Called when the game starts or when spawned
void AActorPrueba::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Your Message"));
	float MyFloat = 10;


	//For 
	// tipo de variable y valor inicial
	// condicion de salida
	//incremento , decremento, como cambia la variable
	double start = FPlatformTime::Seconds();

	TArray<int32> Puestos;

	// put code you want to time here.
	for (size_t i = 0; i < Numeros.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Dame numero %i "), Numeros[i]);

	}
	//pasa por los elementos el for each
	for (int32 num : Numeros) {

		if (num == 1) {
			//guardo o saco mensaje etc
			break;
		}
		UE_LOG(LogTemp, Warning, TEXT("De un for each numero %i "), num);
	}
	//while mucho cuidado con la condicion de salida
	bool encontrado = false;
	int32 numero = 1;
	

	
	double end = FPlatformTime::Seconds();
	UE_LOG(LogTemp, Warning, TEXT("code executed in %f seconds."), end - start);
	//complete en blueprint
}

// Called every frame
void AActorPrueba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorPrueba::SacaMensajeHola() {
	float tiempo = 10;
	UE_LOG(LogTemp, Warning, TEXT("Hola"));
}
int32 AActorPrueba::Suma(int32 numero1, int32 numero2) {
	int32 total = numero1 + numero2;
	UE_LOG(LogTemp, Warning, TEXT("Suma %i"), total);
	return total;
	//esto ya no se ejecuta
	UE_LOG(LogTemp, Warning, TEXT("Hago algo"));
}
FPunto AActorPrueba::CalculaPuntoMedio(FPunto puntoA, FPunto puntoB) {
	FPunto puntomedio;
	puntomedio.x = puntoA.x / puntoB.x;
	puntomedio.y = puntoA.y / puntoB.y;
	puntomedio.z = puntoA.z / puntoB.z;
	return puntomedio;
}
void AActorPrueba::MayorQue(int32 numero1, int32 numero2) {

	//Si la condicion es verdadera se ejecuta
	if (numero1 > numero2) {
		//solo sucede si la condicion es verdadera
		UE_LOG(LogTemp, Warning, TEXT("%i es mayor que %i"),numero1,numero2);
	}
	//se ejecuta si la condicion no es verdadera o es falsa
	else {
		if (numero1 < numero2) {
			UE_LOG(LogTemp, Warning, TEXT("%i es menor que %i"), numero1, numero2);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("%i es igaul que %i"), numero1, numero2);
		}
	}

}
void AActorPrueba::LanzaDado() {
	//numero aleatorio 1 y 6
	int dado = FMath::RandRange(1,6);
	//Para casos concretos
	//Se analiza una variable
	// Y se verifican los casos
	switch (dado)
	{
	case 1:
		UE_LOG(LogTemp, Warning, TEXT("Ha salido 1"));
		break;
	case 2:
		UE_LOG(LogTemp, Warning, TEXT("Ha salido 2"));
		break;
	case 3:
		UE_LOG(LogTemp, Warning, TEXT("Ha salido 3"));
		break;
	case 4:
		UE_LOG(LogTemp, Warning, TEXT("Ha salido 4"));
		break;
	case 5:
		UE_LOG(LogTemp, Warning, TEXT("Ha salido 5"));
		break;
	case 6:
		UE_LOG(LogTemp, Warning, TEXT("Ha salido 6"));
		break;

	default:
		break;
	}


}
void AActorPrueba::InvierteVida() {
	
	//Not logico es la exclamacion
	//interruptor logico
	
	bVivo = !bVivo;
	if (bVivo) {
		UE_LOG(LogTemp, Warning, TEXT("Esta vivo"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Esta muerto"));
	}
}
bool AActorPrueba::PuedeAtacar(bool bEstaCerca, bool bEsVivo) {
	//operador logico AND
	bool puedeAtacar = false;
	
	if (bEstaCerca && bEsVivo) {
		puedeAtacar = true;
	}
	else {
		puedeAtacar = false;
	}
	return puedeAtacar;
}
bool AActorPrueba::DetectaJuagor(bool bTeve, bool bTeoye) {
	//SI ha detectado al jugador
	// lo ha visto o lo ha oido
	// bTeve es true O bTeoye es true , uno de los dos
	// || Or logico
	
	bool detectado = false;
	if (bTeve || bTeoye) {
		UE_LOG(LogTemp, Warning, TEXT("Te he detectado"));
		detectado = true;
	}
	else {
		detectado = false;
	}
	return detectado;
}
void AActorPrueba::Sumar(int32 num1, int32 num2) {


}
void AActorPrueba::Sumar(float num1, float num2) {

}
void AActorPrueba::Sumar(int32 num1, int32 num2, int32 num3) {

}