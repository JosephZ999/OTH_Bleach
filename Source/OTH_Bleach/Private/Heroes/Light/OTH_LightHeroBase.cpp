// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_LightHeroBase.h"
#include "OTH_StatsComponent.h"

AOTH_LightHeroBase::AOTH_LightHeroBase()
{
	StatsComponent->SetHeroElement(EHeroElement::Light);
}
