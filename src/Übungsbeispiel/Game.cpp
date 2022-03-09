#include "Game.h"
#include "Course.h"
#include "Question.h"
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
	Question* question = new Question("Test Question");
	question->AddAnswer("Test A");
	question->AddAnswer("Test B");

	course->AddQuestion(question);

	while (true) {
		std::cout << "Frame" << std::endl;

		std::cout << course->ToString() << std::endl;

		//usleep(1000); ONLY FOR UNIX SYSTEMS
		Sleep(16);
	}
}
