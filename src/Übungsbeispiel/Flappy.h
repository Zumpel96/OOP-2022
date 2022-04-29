#pragma once

#include "GameObject.h"
#define CONST_FLAPPY_SPEED 0.3

class Flappy : public GameObject
{
public:
	Flappy(double y);

	std::string ToString() const override;
	void PhysicsUpdate();
	bool CollisionCheck(const GameObject* other) const override;
};

