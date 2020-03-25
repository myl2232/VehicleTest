// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "ModuleManager.h"
//#include "DcxVehicle/Public/DcxVehicle.h"

AMyGameModeBase::AMyGameModeBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	//DefaultPawnClass = ADcxVehicle::StaticClass();//CreateDefaultSubobject<ADcxVehicle>(TEXT("Vehicle"));
	//FDcxVehicleModule* dcxModule = FModuleManager::Get().GetModule(TEXT("DcxVehicle"));
}