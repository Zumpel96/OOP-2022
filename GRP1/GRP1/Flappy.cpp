#include "Flappy.h"
#include <iostream>

Flappy::Flappy(double x, double y) {
	this->SetX(x);
	this->SetY(y);
	std::cout << "Flappy Created" << std::endl;
}

Flappy::~Flappy() {
	std::cout << "Flappy Destroyed" << std::endl;
}

double Flappy::GetX() const {
	return this->x;
}

double Flappy::GetY() const {
	return this->y;
}

void Flappy::SetX(double x) {
	this->x = x;

	if (this->x < 0) {
		this->x = 0;
	}
	else if (this->x > 100) {
		this->x = 100;
	}
}

void Flappy::SetY(double y) {
	this->y = y;

	if (this->y < 0) {
		this->y = 0;
	}
	else if (this->y > 100) {
		this->y = 100;
	}
}