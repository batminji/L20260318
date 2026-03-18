#pragma once
class UWall
{
public:
	UWall();
	UWall(int X, int Y) : X(X), Y(Y) {};
	~UWall();

	int X;
	int Y;
};

