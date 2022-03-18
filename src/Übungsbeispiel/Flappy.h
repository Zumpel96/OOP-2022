#pragma once

#include "GameObject.h"
#define CONST_FLAPPY_SPEED 0.25

class Flappy : public GameObject
{
public:
	Flappy(double y);

	void Render() const;
	void PhysicsUpdate();

	void Test();
};

