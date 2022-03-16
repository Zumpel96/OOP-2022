#pragma once
#include <string>
#include "Question.h"
#define MAX_QUESTIONS 5

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
	Question* questions[MAX_QUESTIONS];
	int questionCount = 0;
};

