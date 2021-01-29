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
        ///
        /// Called when the game starts or when spawned
        ///
        virtual void BeginPlay();

      public:

        ///
        /// Set the number of enemies
        ///
        UFUNCTION(BlueprintCallable)
        void setNumberofEnemies(int enemy) { enemyNumber = enemy; }

        ///
        /// Get the number of enemies
        ///
        UFUNCTION(BlueprintCallable)
        int getEnemyAmount() { return enemyNumber; }

        ///
        /// Increse the wave number
        ///
        UFUNCTION(BlueprintCallable)
        void newWaveNumber() { waveNumber++; }

        ///
        /// Increase the amount of enemies every round
        ///
        UFUNCTION(BlueprintCallable)
        void calculateEnemyNumber();

    private:

        ///
        /// Enemy count
        int enemyNumber = 5;

        ///
        /// Wave number
        ///
        int waveNumber = 1;
};
