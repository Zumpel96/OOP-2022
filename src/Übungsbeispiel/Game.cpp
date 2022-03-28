#include "Game.h"
#include "Flappy.h"
#include "Pipe.h"
#include <iostream>
#include <windows.h>
#include <math.h>

Game::Game()
{
	this->gameObjects.push_back(new Flappy(20));
}

Game::~Game()
{
	for (const auto& gameObject : this->gameObjects) {
		delete gameObject;
	}
}

void Game::Start()
{
	this->gameObjects.push_back(new Pipe(100, 0));

	while (true) {
		this->PhysicsUpdate();
		this->Render();
		if (this->CollisionCheck()) {
			break;
		}

		Sleep(100);
	}

	std::cout << "You lost!" << std::endl;
}

void Game::Render() const
{
	system("CLS");

	std::cout << "=== FLAPPY BIRD ===" << std::endl;
	for (int y = 10; y >= 0; y--) {
		std::cout << " | ";
		for (int x = 0; x <= 10; x++) {
			bool rendered = false;

			for (const auto& gameObject : this->gameObjects) {
				if (round(gameObject->GetX() / 10.0) == x &&
					round(gameObject->GetY() / 10.0) == y) {
					gameObject->Render();
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
	for (const auto& gameObject : this->gameObjects) {
		gameObject->PhysicsUpdate();
	}
}

bool Game::CollisionCheck() const
{
	for (const auto& gameObjectA : this->gameObjects) {
		for (const auto& gameObjectB : this->gameObjects) {
			if (gameObjectA->CollisionCheck(gameObjectB)) {
				return true;
			}
		}
	}

	return false;
}
