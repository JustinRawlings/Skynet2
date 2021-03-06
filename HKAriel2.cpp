/*
Justin Rawlings
10/14/2018
Name: HKAriel
HK-Ariel search.
*/

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Main program starts here
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	//Random number generator for the enemy.
	int enemyLocation = rand() % 64 + 1;
	std::cout << "Initializing Skynet\n";

	int humanSearchGridHighNumber = 64;
	//Random number generator for the binary search grid.
	int binaryAISearchGridHighNumber = 64;
	int linearAISearchGridHighNumber = 64;
	int humanSearchGridLowNumber = 1;
	int randomAISearchGridHighNumber = 64;
	int binaryAISearchGridLowNumber = 1;
	int randomAISearchGridLowNumber = 1;
	int linearAISearchGridLowNumber = 1;
	int binaryAITargetLocationPrediction = 0;
	int humanTargetLocationPrediction = 0;
	int randomAITargetLocationPrediction = 0;
	int linearAITargetLocationPrediction = 0;

	cout << "\nWelcome to the war games.";
	cout << "\nYou must find and destroy the enemy.";

	//Automatic guess for the skynet program.
	int targetLocationPrediction = ((binaryAISearchGridHighNumber - binaryAISearchGridLowNumber) / 2) + binaryAISearchGridLowNumber;
	int aiGuess = ((binaryAISearchGridHighNumber - binaryAISearchGridLowNumber) / 2) + binaryAISearchGridLowNumber;
	int binaryAINumberOfAttempt = 0;
	int humanNumberOfAttempt = 0;
	int randomNumberOfAttempt = 0;
	int linearNumberOfAttempt = 0;
	bool isEnemyFoundByHuman = false;
	bool isEnemyFoundByBinaryAI = false;
	bool isEnemyFoundByRandomAI = false;
	bool isEnemyFoundByLinearAI = false;
	cout << "Current location of target is \n" << enemyLocation;
	cout << " is the area Skynet is searching. \n" << targetLocationPrediction;

	//Loop statements for skynet to find enemy.
	cout << "Welcome Human Player, it is your turn.";
	do
	{
		cout << "Enter target location: ";
		cin >> humanTargetLocationPrediction;
		if (enemyLocation > humanTargetLocationPrediction)
		{			
			cout << "The guess was too low.\n";
		}

		else if (enemyLocation < humanTargetLocationPrediction)
		{
			cout << "The guess was too high.\n";
		}


		else (enemyLocation == humanTargetLocationPrediction);
		{
			isEnemyFoundByHuman = true;
		}
	} while (!isEnemyFoundByHuman);
	cout << "Enemy found by Human Pilot";
	cout << "Human took " << humanNumberOfAttempt << " tries eliminate enemy.";
	system("pause");
	do
	{
		if (enemyLocation > targetLocationPrediction)
		{
			int searchGridLowNumber = rand() % 64 + 1;
			int targetLocationPrediction = ((binaryAISearchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

			cout << "Skynet did not find enemy combatant.\n";
			cout << targetLocationPrediction << " is the next location to search. \n";
			++binaryAINumberOfAttempt;
		}		
		
		else if (enemyLocation < targetLocationPrediction)
		{
			cout << "Skynet did not find enemy combatant.\n";
			cout << targetLocationPrediction << " is the next location to search. \n";
			++binaryAINumberOfAttempt;
		}
		
		
		else (enemyLocation == targetLocationPrediction);
		{
			isEnemyFoundByBinaryAI = true;
		}
	} while (binaryAINumberOfAttempt != enemyLocation);
	cout << "Enemy combatant killed.\n";
	cout << "Welcome Random AI, it is your turn.";
	system("pause");
	do
	{
		
		int randomAISearchGridLowNumber = rand() % 64 + 1;
		int randomAITargetLocationPrediction = ((randomAISearchGridHighNumber - randomAISearchGridLowNumber) / 2) + randomAISearchGridLowNumber;
		if (enemyLocation > randomAITargetLocationPrediction)
		{
			cout << "The guess was too low.\n";
		}
		else if (enemyLocation < randomAITargetLocationPrediction)
		{
			cout << "The guess was too high.\n";
		}


		else (enemyLocation == randomAITargetLocationPrediction);
		{
			isEnemyFoundByRandomAI = true;
		}
	} while (!isEnemyFoundByRandomAI != enemyLocation);
	cout << "Enemy found by random Pilot";
	cout << "random took " << randomNumberOfAttempt << " tries eliminate enemy.";
	system("pause");
	do
	{

		linearAITargetLocationPrediction = linearAITargetLocationPrediction++;
		if (enemyLocation > linearAITargetLocationPrediction)
		{
			cout << "The guess was too low.\n";
		}

		else if (enemyLocation < linearAITargetLocationPrediction)
		{
			cout << "The guess was too high.\n";
		}


		else (enemyLocation == linearAITargetLocationPrediction);
		{
			isEnemyFoundByLinearAI = true;
		}
	} while (!isEnemyFoundByLinearAI != enemyLocation);
	cout << "Enemy found by linearAI Pilot";
	cout << "linearAI took " << linearNumberOfAttempt << " tries eliminate enemy.";
	return 0;
}

