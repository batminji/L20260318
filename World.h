#pragma once
class AWall;
class AFloor;
class AGoal;

class APlayer;
class AMonster;

class UWorld
{
public:
	UWorld();
	void Process(char InInput);
	void Render();
	bool CheckIsWall(int X, int Y);
	~UWorld();

	AWall* Walls;
	AFloor* Floors;
	AGoal* Destination;
	APlayer* Player;
	AMonster* Monster;
};

