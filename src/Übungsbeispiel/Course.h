#pragma once
#include <string>
#include <vector>
#include "Question.h"

class Course
{
public:
	Course(std::string name);
	~Course();

	void Start();
	void SetGrade(int grade);
	void AddQuestion(Question* question);
	std::string ToString() const;

private:
	std::string name;
	int grade = 5;
	std::vector<Question*> questions;
};

