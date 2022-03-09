#pragma once
#include "Student.h"

class Game
{
public:
	Game();
	~Game();

	void Start();

private:
	Student* player;
};

