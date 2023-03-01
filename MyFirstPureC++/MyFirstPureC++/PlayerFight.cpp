#include "PlayerFight.h"
#include "BotFight.h"

void PlayerFight::Attack()
{

}

void PlayerFight::Guard()
{

}

void PlayerFight::Recieve(int damage)
{
	hp -= damage;
	Action();
}

void PlayerFight::Action()
{
	if (hp > 0)
	{

	}
}

int PlayerFight::GetHp()
{
	return hp;
}
