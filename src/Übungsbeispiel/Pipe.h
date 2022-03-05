#pragma once
class Pipe
{
public:
	Pipe(double x, double y);
	~Pipe();

	double GetX() const;
	double GetY() const;

	void SetX(double x);
	void SetY(double y);

private:
	double x;
	double y;
};

