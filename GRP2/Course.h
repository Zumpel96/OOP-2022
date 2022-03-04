#pragma once
#include <string>

class Course
{
public:
	Course(std::string name);
	~Course();

	void SetGrade(int grade);

private:
	std::string name;
	int grade;
};

