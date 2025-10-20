#include "TrueFalseQuestion.h"

TrueFalseQuestion::TrueFalseQuestion(const std::string& questionText,
                                     const std::string& correctAnswer)
    : MultipleChoiceQuestion(questionText,
                             std::vector<std::string> {"True", "False"},
                             correctAnswer)

{
    // Empty
}

bool TrueFalseQuestion::IsThisAnswerCorrect(const std::string& answer)
    // quickly watch the part of his video where he does this one and check to compare
{
    if(answer == CorrectAnswer)
    {
        return true;
    }

    if(answer == "1" && CorrectAnswer == "True")
    {
        return true;
    }

    if(answer == "2" && CorrectAnswer == "False")
    {
        return true;
    }

    return false;
}


