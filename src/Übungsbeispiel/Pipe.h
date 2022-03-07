#pragma once
#define CONST_PIPE_SPEED 3

class Pipe
{
public:
	Pipe(double x, double y);
	~Pipe();

	double GetX() const;
	double GetY() const;

	void SetX(double x);
	void SetY(double y);

	void Render() const;
	void PhysicsUpdate();

private:
	double x;
	double y;
};

