#pragma once
class Flappy
{
public:
	Flappy(double x, double y);
	~Flappy();

	double GetX() const;
	double GetY() const;

	void SetX(double x);
	void SetY(double y);

private:
	double x;
	double y;
};

