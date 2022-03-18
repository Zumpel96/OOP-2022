#include "Course.h"
#include <iostream>
#include <sstream>

using namespace std;

Course::Course(string name) {
	this->name = name;
	cout << this->name << " created" << endl;
}

Course::~Course() {
	cout << this->name << " destroyed" << endl;
}

void Course::Start()
{
	for (int i = 0; i < this->questionCount; i++) {
		std::cout << this->questions[i]->ToString() << std::endl;
		std::cout << "Enter answer: ";
		std::string answer;
		std::cin >> answer;
		this->questions[i]->Evalute(answer);
	}
}

void Course::SetGrade(int grade) {
	if (!(grade <= 5 && grade >= 1)) {
		throw std::invalid_argument("Grade not between 1 and 5");
	}

	this->grade = grade;
}

void Course::AddQuestion(Question* question)
{
	if (this->questionCount >= MAX_QUESTIONS) {
		std::cout << "Maximum number of questions reached" << std::endl;
		return;
	}

	this->questions[this->questionCount] = question;
	this->questionCount++;
}

std::string Course::ToString() const
{
	std::stringstream ss;

	ss << "[" << this->name << "]" << std::endl;
	ss << " --- Grade: " << this->grade << " --- " << std::endl;
	ss << " =====================================" << std::endl;
	
	for (int i = 0; i < this->questionCount; i++) {
		ss << this->questions[i]->ToString() << std::endl;
	}

	return ss.str();
}
