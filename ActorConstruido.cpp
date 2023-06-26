// Fill out your copyright notice in the Description page of Project Settings.



#include "ActorConstruido.h"


// Sets default values
AActorConstruido::AActorConstruido()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Creo un staticmeshcomponent
	MiMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MiStaicMesh"));
	//Lo emparento al rootcomponet del actor
	MiMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	//Crea una referencia al asset del staticmesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshRocaAsset(TEXT("StaticMesh'/Game/ParagonKwang/FX/Meshes/Debris/Rock_A.Rock_A'"));

	if (MeshRocaAsset.Succeeded()) {
		MiMesh->SetStaticMesh(MeshRocaAsset.Object);
	
	}
	
	FRotator MiRotacion;
	MiRotacion.Yaw = FMath::FRandRange(-180.f, 180.f);
	MiRotacion.Pitch = FMath::FRandRange(-180.f, 180.f);;
	MiRotacion.Roll = FMath::FRandRange(-180.f, 180.f);;
	MiMesh->SetWorldRotation(MiRotacion);

	CollisionBox=CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	CollisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	MiPointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MiLuz"));
	MiPointLight->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//Construyo el audio
	MiAudio= CreateDefaultSubobject<UAudioComponent>(TEXT("MiAudio"));
	MiAudio->SetupAttachment(RootComponent);
	//Cargar el sonido que lleva
	
		static ConstructorHelpers::FObjectFinder<USoundBase>SonidoExplosion(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
		if (SonidoExplosion.Succeeded()) {
			MiAudio->Sound = SonidoExplosion.Object;
			MiAudio->bAutoActivate = true;
		}
}


// Called when the game starts or when spawned
void AActorConstruido::BeginPlay()
{
	Super::BeginPlay();
	//Modificar sus propiedades
	//Como un Set
	MiPointLight->Intensity = 5000;
	FColor verde = FColor(0, 255, 0, 255);
	MiPointLight->LightColor = verde;
	//Get de blueprint es simplemente devolver la variable
	UE_LOG(LogTemp, Warning, TEXT("Tiene  %f intensidad"), MiPointLight->Intensity);
	
}

// Called every frame
void AActorConstruido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

