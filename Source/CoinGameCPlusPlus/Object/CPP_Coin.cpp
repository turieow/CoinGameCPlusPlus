// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\Object/CPP_Coin.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"    
#include "CoinGameCPlusPlus\Interface/CPP_ItoGameMode.h"


// Sets default values
ACPP_Coin::ACPP_Coin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent->bVisualizeComponent = true;


	// メッシュを設定
	mCoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("CoinMesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Props/MaterialSphere.MaterialSphere'"));
	mCoinMesh->SetStaticMesh(mesh.Object);
	mCoinMesh->SetupAttachment(RootComponent);

	// マテリアルを設定
	const ConstructorHelpers::FObjectFinder<UMaterial> mat(TEXT("Material'/Game/StarterContent/Props/Materials/M_MaterialSphere.M_MaterialSphere'"));
	mCoinMesh->SetMaterial(0, mat.Object);

	// コリジョンを設定
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(FName("Collision"));
	BoxCollision->SetupAttachment(mCoinMesh);
	BoxCollision->SetBoxExtent(FVector(60,60,60));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ACPP_Coin::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACPP_Coin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Coin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_Coin::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Overlap"));
	//AGameModeBase* gameModeBase = UGameplayStatics::GetGameMode(GetWorld());
	//auto gameModeBase = UGameplayStatics::GetGameMode(GetWorld());
	/*auto gameModeBase = GetWorld()->GetAuthGameMode<AGameModeBase>();
	ICPP_ItoGameMode::Execute_IAddCoin(gameModeBase, 1);*/
	Destroy();
}

