// Fill out your copyright notice in the Description page of Project Settings.
#include "EnemySpawner.h"

///
/// Calculate the enemy number for the next wave
///
void AEnemySpawner::calculateEnemyNumber()
{
	enemyNumber = (waveNumber * 5) - (waveNumber * 2);
}
