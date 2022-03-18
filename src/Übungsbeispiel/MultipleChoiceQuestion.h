#pragma once
#include "Question.h"

class MultipleChoiceQuestion : public Question
{
public:
	MultipleChoiceQuestion(std::string question, std::string answer);
	void Evalute(std::string answer);
};

