#pragma once
#include <string>

class Question
{
public:
	Question(std::string question, std::string answer);

	std::string GetQuestion() const;
	void AddAnswer(std::string answer);
	std::string ToString() const;
	virtual void Evalute(std::string answer) = 0;

private:
	std::string question;
	std::string answer;
	std::string answers[4];
	int answerCount = 0;
};

