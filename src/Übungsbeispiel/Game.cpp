#include "Game.h"
#include <iostream>

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
	while (true) {
		this->PhysicsUpdate();
		this->Render();
	}
}

void Game::Render()
{
	system("CLS");
	this->flappy->Render();
}

void Game::PhysicsUpdate()
{
	this->flappy->PhysicsUpdate();
}