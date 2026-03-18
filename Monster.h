#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	AMonster();
	void Move(int dx, int dy);
	~AMonster();
};