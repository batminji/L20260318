#include "Player.h"

UPlayer::UPlayer()
{
	X = 1;
	Y = 1;
}

void UPlayer::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}

int UPlayer::GetX()
{
	return X;
}

int UPlayer::GetY()
{
	return Y;
}

UPlayer::~UPlayer()
{
}
