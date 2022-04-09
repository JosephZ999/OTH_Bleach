// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTH_Hero.generated.h"

class UOTH_StatsComponent;
class USceneComponent;
class UPaperFlipbookComponent;

UCLASS(Abstract)
class OTH_BLEACH_API AOTH_Hero : public AActor
{
	GENERATED_BODY()

public:
	AOTH_Hero();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UOTH_StatsComponent* StatsComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USceneComponent* SceneRootComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UPaperFlipbookComponent* SpriteComponent;

	virtual void BeginPlay() override;
};
