#include "MultipleChoiceQuestion.h"
#include <iostream>

MultipleChoiceQuestion::MultipleChoiceQuestion(std::string question, std::string answer) : Question::Question(question, answer)
{

}

void MultipleChoiceQuestion::Evalute(std::string answer)
{
	std::cout << "MultipleChoice" << std::endl;
}
