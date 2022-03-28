#include "GameObject.h"
#include <iostream>

GameObject::GameObject(double x, double y) {
	this->SetX(x);
	this->SetY(y);
	std::cout << "GameObject Created" << std::endl;
}

GameObject::~GameObject() {
	std::cout << "GameObject Destroyed" << std::endl;
}

double GameObject::GetX() const {
	return this->x;
}

double GameObject::GetY() const {
	return this->y;
}

void GameObject::SetX(double x) {
	this->x = x;

	if (this->x < 0) {
		this->x = 0;
	}
	else if (this->x > 100) {
		this->x = 100;
	}
}

void GameObject::SetY(double y) {
	this->y = y;

	if (this->y < 0) {
		this->y = 0;
	}
	else if (this->y > 100) {
		this->y = 100;
	}
}

bool GameObject::CollisionCheck(GameObject* other) const
{
	return this->BaseCollision(other);
}

bool GameObject::BaseCollision(GameObject* other) const
{
	if (this == other) {
		return false;
	}

	return round(this->GetX() / 10.0) == round(other->GetX() / 10.0) &&
		round(this->GetY() / 10.0) == round(other->GetY() / 10.0);
}
