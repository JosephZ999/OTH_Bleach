// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_WindHeroBase.h"
#include "OTH_StatsComponent.h"

AOTH_WindHeroBase::AOTH_WindHeroBase()
{
	StatsComponent->SetHeroElement(EHeroElement::Wind);
}
