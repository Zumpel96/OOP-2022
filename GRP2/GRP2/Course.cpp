#include "Course.h"
#include <iostream>

using namespace std;

Course::Course(string name) {
	this->name = name;
	cout << this->name << " created" << endl;
}

Course::~Course() {
	cout << this->name << " destroyed" << endl;
}

void Course::SetGrade(int grade) {
	if (!(grade <= 5 && grade >= 1)) {
		throw std::invalid_argument("Grade not between 1 and 5");
	}

	this->grade = grade;
}
