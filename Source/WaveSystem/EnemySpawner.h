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

      public:

        UFUNCTION(BlueprintCallable)
        void setNumberofEnemies(int enemy) { enemyNumber = enemy; }

        UFUNCTION(BlueprintCallable)
        int getEnemyAmount() { return enemyNumber; }

        UFUNCTION(BlueprintCallable)
        void newWaveNumber() { waveNumber++; }

        UFUNCTION(BlueprintCallable)
        void calculateEnemyNumber();

    private:

        int enemyNumber = 5;
        int waveNumber = 1;
};
