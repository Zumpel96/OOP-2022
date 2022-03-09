#pragma once
#include <string>
#include "Question.h"

class Course
{
public:
	Course(std::string name);
	~Course();

	void SetGrade(int grade);
	void AddQuestion(Question* question);
	std::string ToString() const;

private:
	std::string name;
	int grade;
	Question* question;
};

