#pragma once

#include "GameObject.h"
#define CONST_FLAPPY_SPEED 0.3

class Flappy : public GameObject
{
public:
	Flappy(double y);

	void Render() const;
	void PhysicsUpdate();
	bool CollisionCheck(GameObject* other) const override;
};

