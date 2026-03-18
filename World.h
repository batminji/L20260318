#pragma once
class UWall;
class UFloor;
class UDestination;

class UPlayer;
class UMonster;

class UWorld
{
public:
	UWorld();

	void Process(char InInput);
	void Render();
	bool CheckIsWall(int X, int Y);
	bool CheckArrived();
	~UWorld();

	UWall* Walls;
	UFloor* Floors;
	UDestination* Destination;
	UPlayer* Player;
	UMonster* Monster;
};

