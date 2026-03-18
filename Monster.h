#pragma once
class UMonster
{
public:
	UMonster();
	UMonster(int X, int Y) : X(X), Y(Y) {};
	void Move(int dx, int dy);
	~UMonster();

	int X;
	int Y;
};

