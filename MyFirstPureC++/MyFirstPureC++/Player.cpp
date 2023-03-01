#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

void player::RecievePlayerName() 
{
	std:cout << "Please choose your name: ";
	std::cin >> name;
	if (name == "Asdrubal")
	{
		std::cout << "\n Nice ";
	}
	else
	{
		std::cout << "\n What a great name!\n \n";
	}

}

void player::DisplayStats()
{
	std::cout << "This are your stats \n";
	std::cout << "Player " << name << " has " << hp << " hp " << movespeed << " movement speed and " << money << " coins\n\n";
}

void player::GiveMoney()
{
	std::cout << "How much money would you like to recieve ?\n";
	std::cin >> playerNumValue;

		if (playerNumValue < 100)
		{
			money += 1000;
			std::cout << "\nOh, you're so humble here you go. \n";
		}
		else
		{
			money += 1;
			std::cout << "Oh, What a gready person, here, for your troubles. \n";
		}
		std::cout << "You have recieved " << money << " coins \n\n";

		DisplayStats();
}

void player::EnemyEncounter()
{
	/*std::cout << "You have encountered an enemy !\n";
	std::cout << "Do you wish to kill it ? (Y/N)\n";
		std::cin >> playerAnswer;
	if (playerAnswer = "y" && playerAnswer = "Y)"
	{
		std::cout << "Killed Enemy";
	}
	else if (playerAnswer == "n" || playerAnswer == "N")
	{
		std::cout << "Spared Enemy";
	}*/
}
