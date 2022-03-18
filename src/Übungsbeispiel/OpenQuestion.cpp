#include "OpenQuestion.h"
#include <iostream>

OpenQuestion::OpenQuestion(std::string question, std::string answer) : Question::Question(question, answer)
{

}

void OpenQuestion::Evalute(std::string answer)
{
	std::cout << "OpenQuestion" << std::endl;
}