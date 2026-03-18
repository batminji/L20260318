#include "Player.h"

APlayer::APlayer()
{
	X = 1;
	Y = 1;
}

void APlayer::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}

APlayer::~APlayer()
{
}
