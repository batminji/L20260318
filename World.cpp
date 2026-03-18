#include "World.h"
#include "Floor.h"
#include "Wall.h"
#include "Destination.h"
#include "Player.h"
#include "Monster.h"

UWorld::UWorld()
{
	Floors = new UFloor[64];
	Walls = new UWall[36];
	Destination = new UDestination;
	Player = new UPlayer;
	Monster = new UMonster;
}

void UWorld::Process(char InInput)
{
	if (InInput == 'w')
	{
		Player->Move(0, -1);
		if (CheckIsWall(Player->GetX(), Player->GetY()))
		{
			Player->Move(0, 1);
		}
	}
	else if (InInput == 's')
	{
		Player->Move(0, 1);
		if (CheckIsWall(Player->GetX(), Player->GetY()))
		{
			Player->Move(0, -1);
		}
	}
	else if (InInput == 'a')
	{
		Player->Move(-1, 0);
		if (CheckIsWall(Player->GetX(), Player->GetY()))
		{
			Player->Move(1, 0);
		}
	}
	else if (InInput == 'd')
	{
		Player->Move(1, 0);
		if (CheckIsWall(Player->GetX(), Player->GetY()))
		{
			Player->Move(-1, 0);
		}
	}
}

void UWorld::Render()
{
	
}

bool UWorld::CheckIsWall(int X, int Y)
{
	for (int i = 0; i < 36; ++i)
	{
		if (Walls[i].X == X && Walls[i].Y == Y)
		{
			return true;
		}
	}
	return false;
}

bool UWorld::CheckArrived()
{
	if (Player->X == Destination->X && Player->Y == Destination->Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

UWorld::~UWorld()
{
	delete[] Floors;
	Floors = nullptr;

	delete[] Walls;
	Walls = nullptr;

	delete Destination;
	Destination = nullptr;

	delete Player;
	Player = nullptr;

	delete Monster;
	Monster = nullptr;
}
