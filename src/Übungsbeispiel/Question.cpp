#include "Question.h"
#include <sstream>
#include <iostream>

Question::Question(std::string question)
{
	this->question = question;
}

std::string Question::GetQuestion() const
{
	return this->question;
}

void Question::AddAnswer(std::string answer)
{
	if (this->answerCount >= 4) {
		return;
	}

	this->answers[this->answerCount] = answer;
	this->answerCount++;
}

std::string Question::ToString() const
{
	std::stringstream ss;

	ss << "[" << this->question << "]" << std::endl;
	
	for (int i = 0; i < this->answerCount; i++) {
		ss << " - " << this->answers[i] << std::endl;
	}

	return ss.str();
}
