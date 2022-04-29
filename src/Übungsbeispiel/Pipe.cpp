#include "Pipe.h"
#include <iostream>

std::string Pipe::ToString() const
{
	return "\033[42m \033[m";
}

void Pipe::PhysicsUpdate()
{
	this->SetX(this->GetX() - CONST_PIPE_SPEED);
}