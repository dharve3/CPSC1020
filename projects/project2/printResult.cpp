// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: ~2 hrs
// Desc: Sourcefile for printResult()

#include "printResult.h"
#include "QA.h"

// Returns a string of the results of the quiz
std::string printResult(int questions, int correct, int wrong) {
    std::stringstream ss;
    ss << "Number of questions: " << questions << std::endl;
    ss << "Number correct answers: " << correct << std::endl;
    ss << "Number wrong answers: " << wrong << std::endl;
    ss << "Final score: " << QA::getScore() << std::endl;
    return ss.str();
}