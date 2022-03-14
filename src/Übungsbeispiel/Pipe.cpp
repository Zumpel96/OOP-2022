#include "Pipe.h"
#include <iostream>

Pipe::Pipe(double x, double y) {
	this->SetX(x);
	this->SetY(y);
	std::cout << "Pipe Created" << std::endl;
}

Pipe::~Pipe() {
	std::cout << "Pipe Destroyed" << std::endl;
}

double Pipe::GetX() const {
	return this->x;
}

double Pipe::GetY() const {
	return this->y;
}

void Pipe::SetX(double x) {
	this->x = x;

	if (this->x < 0) {
		this->x = 0;
	}
	else if (this->x > 100) {
		this->x = 100;
	}
}

void Pipe::SetY(double y) {
	this->y = y;

	if (this->y < 0) {
		this->y = 0;
	}
	else if (this->y > 100) {
		this->y = 100;
	}
}

void Pipe::Render() const
{
	std::cout << "\033[42m \033[m";
}

void Pipe::PhysicsUpdate()
{
	this->SetX(this->GetX() - CONST_PIPE_SPEED);
}