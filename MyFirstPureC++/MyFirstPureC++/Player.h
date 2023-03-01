#pragma once
class player {
	int hp = 100;
	int movespeed = 25;
	double money = 0;
	char name[12];
	int playerNumValue;
	char playerAnswer;

public:
	void RecievePlayerName();
	void DisplayStats();
	void GiveMoney();
	void EnemyEncounter();
};