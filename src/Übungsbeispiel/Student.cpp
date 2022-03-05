#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name) {
	this->name = name;
	cout << this->name << " created" << endl;
}

Student::~Student() {
	cout << this->name << " destroyed" << endl;
}