#include "Monster.h"

AMonster::AMonster()
{
	X = 1;
	Y = 1;
}

void AMonster::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}

AMonster::~AMonster()
{
}
