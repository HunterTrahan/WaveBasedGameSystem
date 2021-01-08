// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemySpawner.generated.h"

/**
 * 
 */
UCLASS()
class WAVESYSTEM_API AEnemySpawner : public AGameModeBase
{
    GENERATED_BODY()

    protected:

        //Called when the game starts or when spawned
        virtual void BeginPlay();
};
