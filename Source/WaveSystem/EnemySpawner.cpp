// Fill out your copyright notice in the Description page of Project Settings.
#include "EnemySpawner.h"

void AEnemySpawner::BeginPlay()
{

}

void AEnemySpawner::calculateEnemyNumber()
{
	enemyNumber = (waveNumber * 5) - (waveNumber * 2);
}
