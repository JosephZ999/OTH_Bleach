// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_WaterHeroBase.h"
#include "OTH_StatsComponent.h"

AOTH_WaterHeroBase::AOTH_WaterHeroBase()
{
	StatsComponent->SetHeroElement(EHeroElement::Water);
}
