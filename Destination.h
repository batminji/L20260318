#pragma once
class UDestination
{
public:
	UDestination();
	UDestination(int X, int Y) : X(X), Y(Y) {};
	~UDestination();

	int X;
	int Y;
};

