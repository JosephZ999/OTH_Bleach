// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OTH_CoreTypes.h"
#include "OTH_StatsComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class OTH_BLEACH_API UOTH_StatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UOTH_StatsComponent();

	UFUNCTION(BlueprintCallable, Category = "Hero")
	EHeroElement GetHeroElement() const { return ElementType; }

	UFUNCTION(BlueprintCallable, Category = "Hero")
	EHeroClass GetClassType() const { return ClassType; }

	void SetHeroElement(EHeroElement Value) { ElementType = Value; }
	void SetHeroClass(EHeroClass Value) { ClassType = Value; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Hero")
	EHeroElement ElementType;

	UPROPERTY(EditDefaultsOnly, Category = "Hero")
	EHeroClass ClassType;
};
