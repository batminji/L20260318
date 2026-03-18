#pragma once
class UPlayer
{
public:
	UPlayer();
	UPlayer(int X, int Y) : X(X), Y(Y) {};
	void Move(int dx, int dy);
	int GetX();
	int GetY();
	~UPlayer();

	int X;
	int Y;
};

