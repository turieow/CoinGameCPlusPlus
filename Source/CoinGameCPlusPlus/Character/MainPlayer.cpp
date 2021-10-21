// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinGameCPlusPlus\Character\MainPlayer.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// メッシュを設定
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> skMesh(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin_Female.SK_Mannequin_Female'"));
	this->GetMesh()->SetSkeletalMesh(skMesh.Object);

	// メッシュトランスフォーム修正
	this->GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90.f), FRotator(0, -90, 0));
	
	// アニメーション設定
	const ConstructorHelpers::FObjectFinder<UAnimBlueprint> animBP(TEXT("AnimBlueprint'/Game/Animation/ABP_MainPlayer.ABP_MainPlayer'"));
	this->GetMesh()->SetAnimInstanceClass(animBP.Object->GeneratedClass);
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

