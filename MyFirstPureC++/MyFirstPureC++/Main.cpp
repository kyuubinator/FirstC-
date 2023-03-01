#include "Main.h"
#include "Player.h"
#include "Enemy.h"
#include "PlayerFight.h"
#include "BotFight.h"
#include <iostream>

int main() {

	//playerAdventure();
	playerBotFight();
}


void playerAdventure() {
	player myPlayer;
	enemy enemy;
	myPlayer.RecievePlayerName();
	myPlayer.DisplayStats();
	myPlayer.GiveMoney();
	enemy.EnemyText();
	myPlayer.EnemyEncounter();
}

void playerBotFight() {
	PlayerFight player;
	BotFight bot;
	
	if (player.GetHp() < 0)
	{
		std::cout << "\n\n\n Player Wins \n\n\n";
	}
	if (bot.GetHp() < 0)
	{
		std::cout << "\n\n\n Bot Wins \n\n\n";
	}

}