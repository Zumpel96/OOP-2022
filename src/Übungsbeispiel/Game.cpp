#include "Game.h"
#include "Flappy.h"
#include "Pipe.h"
#include <iostream>
#include <windows.h>

Game::Game()
{
	this->gameObjects[0] = new Flappy(20);
	this->numberOfGameObjects++;
}

Game::~Game()
{
	for (int i = 0; i < this->numberOfGameObjects; i++) {
		delete this->gameObjects[i];
	}
	delete[] this->gameObjects;
}

void Game::Start()
{
	this->gameObjects[1] = new Pipe(100, 0);
	this->numberOfGameObjects++;

	while (true) {
		this->PhysicsUpdate();
		this->Render();
		Sleep(100);
	}
}

void Game::Render() const
{
	system("CLS");

	std::cout << "=== FLAPPY BIRD ===" << std::endl;
	for (int y = 10; y >= 0; y--) {
		std::cout << " | ";
		for (int x = 0; x <= 10; x++) {
			bool rendered = false;

			for (int i = 0; i < this->numberOfGameObjects; i++) {
				if (round(this->gameObjects[i]->GetX() / 10.0) == x &&
					round(this->gameObjects[i]->GetY() / 10.0) == y) {
					this->gameObjects[i]->Render();
					rendered = true;
				}
			}

			if (!rendered) {
				std::cout << " ";
			}
		}
		std::cout << " |" << std::endl;
	}
	std::cout << "=================" << std::endl;
}

void Game::PhysicsUpdate()
{
	for (int i = 0; i < this->numberOfGameObjects; i++) {
		this->gameObjects[i]->PhysicsUpdate();
	}
}