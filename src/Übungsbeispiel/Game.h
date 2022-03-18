#pragma once
#include "GameObject.h"

class Game
{
public:
	Game();
	~Game();

	void Start();
	void Render() const;
	void PhysicsUpdate();

private:
	GameObject* gameObjects[10];
	int numberOfGameObjects = 0;
};

