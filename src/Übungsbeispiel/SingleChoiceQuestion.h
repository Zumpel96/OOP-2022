#pragma once
#include "Question.h"

class SingleChoiceQuestion : public Question
{
public:
	SingleChoiceQuestion(std::string question, std::string answer);
	void Evalute(std::string answer);
};

