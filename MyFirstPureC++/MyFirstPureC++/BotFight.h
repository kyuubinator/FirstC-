#pragma once

class BotFight
{
	int hp = 100;
	int damage = 0;
	char name;

public:
	void Attack();
	void Guard();
	void Recieved(int damage);
	void Action();
	int GetHp();
};