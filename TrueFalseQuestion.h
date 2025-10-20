#pragma once

#include "MultipleChoiceQuestion.h"

class TrueFalseQuestion : public MultipleChoiceQuestion
{
public:
    // member vector AnswerChoices is always "True", "False" - implementation file ctor
    TrueFalseQuestion(const std::string& questionText,
                      const std::string& correctAnswer);

	virtual bool IsThisAnswerCorrect(const std::string& answer) override;
};



