#include "Pipe.h"
#include <iostream>

void Pipe::Render() const
{
	std::cout << "\033[42m \033[m";
}

void Pipe::PhysicsUpdate()
{
	this->SetX(this->GetX() - CONST_PIPE_SPEED);
}