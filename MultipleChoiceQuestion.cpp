#include "MultipleChoiceQuestion.h"

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& questionText,
                           const std::vector<std::string>& answerChoices,
                           const std::string& correctAnswer)
    : Question(questionText, correctAnswer),
      AnswerChoices(answerChoices)
{
    // Empty
}

std::string MultipleChoiceQuestion::GetPossibleAnswersText()
{
    std::string answerList;
    int answerIndex = 1;
    for(std::string& answer : AnswerChoices)
    {
        answerList += std::to_string(answerIndex);
        answerList += ") " + answer + "\n";
        ++answerIndex;
    }

    return answerList;
}

bool MultipleChoiceQuestion::IsThisAnswerCorrect(const std::string& answer)
{
    int answerIndex = std::stoi(CorrectAnswer) - 1;

    // true for correct answer given as number choice or full text
    return (answer == CorrectAnswer || answer == AnswerChoices[answerIndex]);
}

