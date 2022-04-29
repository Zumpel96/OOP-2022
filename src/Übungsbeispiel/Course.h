#pragma once
#include <string>
#include <vector>
#include <iostream>
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

	const Course* operator+=(Question* question);
	friend std::ostream& operator<<(std::ostream& os, const Course& course);
	friend std::ostream& operator<<(std::ostream& os, const Course* course);

private:
	std::string name;
	int grade = 5;
	std::vector<Question*> questions;
};

