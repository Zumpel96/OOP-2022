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

	for (const auto& question : questions) {
		delete question;
	}
}

void Course::Start()
{
	for (const auto& question : questions) {
		std::cout << question->ToString() << std::endl;
		std::cout << "Enter answer: ";
		std::string answer;
		std::cin >> answer;
		question->Evalute(answer);
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
	this->questions.push_back(question);
}

std::string Course::ToString() const
{
	std::stringstream ss;

	ss << "[" << this->name << "]" << std::endl;
	ss << " --- Grade: " << this->grade << " --- " << std::endl;
	ss << " =====================================" << std::endl;
	
	for (const auto& question : questions) {
		ss << question->ToString() << std::endl;
	}

	return ss.str();
}
