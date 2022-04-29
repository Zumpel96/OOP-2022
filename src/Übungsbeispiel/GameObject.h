#pragma once
#include <iostream>
#include <string>

class GameObject
{
public:
	GameObject(double x, double y);
	~GameObject();

	double GetX() const;
	double GetY() const;

	void SetX(double x);
	void SetY(double y);

	virtual void PhysicsUpdate() = 0;
	virtual std::string ToString() const = 0;
	virtual bool CollisionCheck(const GameObject* other) const;

	const bool operator+(const GameObject& other);
	const bool operator+(const GameObject* other);
	friend std::ostream& operator<<(std::ostream& os, const GameObject& gameObject);
	friend std::ostream& operator<<(std::ostream& os, const GameObject* gameObject);

protected:
	bool BaseCollision(const GameObject* other) const;

private:
	double x;
	double y;
};

