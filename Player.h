#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	void Move(int dx, int dy);
	~APlayer();
};

