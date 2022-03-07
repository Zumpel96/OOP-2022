#pragma once
#include "Flappy.h"

class Game
{
public:
	Game();
	~Game();

	void Start();
	void Render();
	void PhysicsUpdate();

private:
	Flappy* flappy;
};

