#include <iostream>
#include "Student.h"
#include "Course.h"

int main()
{
    Student* studentA = new Student("Anna");
    Student* studentB = new Student("Sepp");
    Course* course = new Course("OOP");

    course->SetGrade(3);
    //course->SetGrade(23);

    delete studentA;
    delete studentB;
    delete course;
}