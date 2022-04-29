#pragma once
#include "GameObject.h"
#define CONST_PIPE_SPEED 3

class Pipe : public GameObject
{
public:
	Pipe(double x, double y) : GameObject(x, y) {}
	std::string ToString() const override;
	void PhysicsUpdate();
};

