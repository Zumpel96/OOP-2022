#include "Game.h"
#include <iostream>
#include <windows.h>

Game::Game()
{
	this->flappy = new Flappy(10, 20);
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
		//Sleep(16);
	}
}

void Game::Render(const Pipe* pipe) const
{
	system("CLS");
	this->flappy->Render();
	pipe->Render();
}

void Game::PhysicsUpdate(Pipe* pipe)
{
	this->flappy->PhysicsUpdate();
	pipe->PhysicsUpdate();
}