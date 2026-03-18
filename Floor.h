#pragma once
class UFloor
{
public:
	UFloor();
	UFloor(int X, int Y) : X(X), Y(Y) {};
	~UFloor();

	int X;
	int Y;
};

