// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_FireHeroBase.h"
#include "OTH_StatsComponent.h"

AOTH_FireHeroBase::AOTH_FireHeroBase()
{
	StatsComponent->SetHeroElement(EHeroElement::Fire);
}
