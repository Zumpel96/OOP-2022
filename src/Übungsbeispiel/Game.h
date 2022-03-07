#pragma once
#include "Flappy.h"
#include "Pipe.h"

class Game
{
public:
	Game();
	~Game();

	void Start();
	void Render(const Pipe* pipe) const;
	void PhysicsUpdate(Pipe* pipe);

private:
	Flappy* flappy;
};

