#include "Monster.h"

UMonster::UMonster()
{
	X = 1;
	Y = 1;
}

void UMonster::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}

UMonster::~UMonster()
{
}
