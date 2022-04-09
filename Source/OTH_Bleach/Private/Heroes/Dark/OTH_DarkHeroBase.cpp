// Fill out your copyright notice in the Description page of Project Settings.

#include "OTH_DarkHeroBase.h"
#include "OTH_StatsComponent.h"

AOTH_DarkHeroBase::AOTH_DarkHeroBase()
{
	StatsComponent->SetHeroElement(EHeroElement::Dark);
}
