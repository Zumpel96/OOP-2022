#include "Flappy.h"
#include <iostream>
#include <stdexcept>

Flappy::Flappy(double y) : GameObject::GameObject(20, y)
{
	std::cout << "Test" << std::endl;
}

std::string Flappy::ToString() const
{
	return "\033[43m \033[m";
}

void Flappy::PhysicsUpdate()
{
	this->SetY(this->GetY() - CONST_FLAPPY_SPEED);
}

bool Flappy::CollisionCheck(const GameObject* other) const
{
	if (this->GetY() <= 0) {
		return true;
	}

	return this->BaseCollision(other);
}
