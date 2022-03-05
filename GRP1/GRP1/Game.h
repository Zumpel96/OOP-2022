#pragma once
#include "Flappy.h"

class Game
{
public:
	Game();
	~Game();

	void Start();

private:
	Flappy* flappy;
};

