#pragma once
#include "GameObject.h"
#include <vector>

class Game
{
public:
	Game();
	~Game();

	void Start();
	void Render() const;
	void PhysicsUpdate();
	bool CollisionCheck() const;

private:
	std::vector<GameObject*> gameObjects;
};

