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

private:
	double x;
	double y;
};

