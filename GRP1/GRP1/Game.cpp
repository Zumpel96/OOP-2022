#include "Game.h"
#include <iostream>

Game::Game()
{
	this->flappy = new Flappy(10, 0);
}

Game::~Game()
{
	delete flappy;
}

void Game::Start()
{
	while (true) {
		std::cout << this->flappy->GetX() << " " << this->flappy->GetY() << std::endl;
	}
}