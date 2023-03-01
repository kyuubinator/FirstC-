#include "BotFight.h"
#include "PlayerFight.h"

void BotFight::Attack()
{
	PlayerFight player;

}

void BotFight::Guard()
{

}

void BotFight::Recieved(int damage)
{
	hp -= damage;
	Action();
}

void BotFight::Action()
{

	if (hp > 0)
	{
		
	}
	else {

	}
}

int BotFight::GetHp()
{
	return hp;
}
