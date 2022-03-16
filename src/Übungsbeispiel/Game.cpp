#include "Game.h"
#include "Course.h"
#include "SingleChoiceQuestion.h"
#include "MultipleChoiceQuestion.h"
#include "OpenQuestion.h"
#include <iostream>
#include <Windows.h>
//#include <unistd.h>

Game::Game()
{
	this->player = new Student("Player");
}

Game::~Game()
{
	delete this->player;
}

void Game::Start()
{
	Course* course = new Course("Test Course");
	Question* q1 = new SingleChoiceQuestion("Test Question A", "Test A");
	q1->AddAnswer("Test A");
	q1->AddAnswer("Test B");
	Question* q2 = new MultipleChoiceQuestion("Test Question B", "Test B;Test C");
	q2->AddAnswer("Test A");
	q2->AddAnswer("Test B");
	q2->AddAnswer("Test C");
	Question* q3 = new OpenQuestion("Test Question C", "Test");

	course->AddQuestion(q1);
	course->AddQuestion(q2);
	course->AddQuestion(q3);

	course->Start();

	//while (true) {
	//	std::cout << "Frame" << std::endl;

	//	std::cout << course->ToString() << std::endl;

	//	//usleep(1000); ONLY FOR UNIX SYSTEMS
	//	break;
	//	Sleep(16);
	//}
}
