#include "World.h"
#include "Floor.h"
#include "Wall.h"
#include "Goal.h"
#include "Player.h"
#include "Monster.h"

UWorld::UWorld()
{
	Floors = new AFloor[64];
	Walls = new AWall[36];
	Destination = new AGoal;
	Player = new APlayer;
	Monster = new AMonster;
}

void UWorld::Process(char InInput)
{
	
}

void UWorld::Render()
{
	
}

bool UWorld::CheckIsWall(int X, int Y)
{
	return false;
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
