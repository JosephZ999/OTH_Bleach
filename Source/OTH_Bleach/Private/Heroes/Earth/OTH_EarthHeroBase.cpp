// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_EarthHeroBase.h"
#include "OTH_StatsComponent.h"

AOTH_EarthHeroBase::AOTH_EarthHeroBase()
{
	StatsComponent->SetHeroElement(EHeroElement::Earth);
}
