#include "Game.h"
#include <iostream>
#include <windows.h>

Game::Game()
{
	this->flappy = new Flappy(20);
}

Game::~Game()
{
	delete flappy;
}

void Game::Start()
{
	Pipe* p = new Pipe(100, 0);

	while (true) {
		this->PhysicsUpdate(p);
		this->Render(p);
		Sleep(100);
	}
}

void Game::Render(const Pipe* pipe) const
{
	system("CLS");

	std::cout << "=== FLAPPY BIRD ===" << std::endl;
	for (int y = 10; y >= 0; y--) {
		std::cout << " | ";
		for (int x = 0; x <= 10; x++) {
			if (round(this->flappy->GetX() / 10.0) == x &&
				round(this->flappy->GetY() / 10.0) == y) {
				this->flappy->Render();
			} else if (round(pipe->GetX() / 10.0) == x &&
				round(pipe->GetY() / 10.0) == y) {
				pipe->Render();
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << " |" << std::endl;
	}
	std::cout << "=================" << std::endl;
}

void Game::PhysicsUpdate(Pipe* pipe)
{
	this->flappy->PhysicsUpdate();
	pipe->PhysicsUpdate();
}