#pragma once

#define CONST_FLAPPY_SPEED 0.25

class Flappy
{
public:
	Flappy(double x, double y);
	~Flappy();

	double GetX() const;
	double GetY() const;

	void SetX(double x);
	void SetY(double y);

	void Render();
	void PhysicsUpdate();

private:
	double x;
	double y;
};

