#pragma once
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
	virtual void Render() const = 0;
	virtual bool CollisionCheck(GameObject* other) const;

protected:
	bool BaseCollision(GameObject* other) const;

private:
	double x;
	double y;
};

