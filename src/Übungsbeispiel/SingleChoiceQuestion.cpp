#include "SingleChoiceQuestion.h"
#include <iostream>

SingleChoiceQuestion::SingleChoiceQuestion(std::string question, std::string answer) : Question::Question(question, answer)
{

}

void SingleChoiceQuestion::Evalute(std::string answer)
{
	std::cout << "SingleChoiceQuestion" << std::endl;
}