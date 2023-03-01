#pragma once
class PlayerFight {
	int hp = 100;
	int damage = 0;
	char name;
	BotFight bot;

public:
	void Attack();
	void Guard();
	void Recieve(int damage);
	void Action();
	int GetHp();
};