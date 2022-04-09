// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_Hero.h"
#include "Components/SceneComponent.h"
#include "OTH_StatsComponent.h"
#include "PaperFlipbookComponent.h"

AOTH_Hero::AOTH_Hero()
{
	PrimaryActorTick.bCanEverTick = false;

	StatsComponent	   = CreateDefaultSubobject<UOTH_StatsComponent>(TEXT("StatsComp"));
	SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SpriteComponent	   = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SpriteComp"));

	SetRootComponent(SceneRootComponent);
	SpriteComponent->SetupAttachment(RootComponent);
}

void AOTH_Hero::BeginPlay()
{
	Super::BeginPlay();

	check(StatsComponent);
	check(SpriteComponent);
}
