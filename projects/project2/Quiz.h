// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 
// Project 2
// Time: 
// Desc: Headerfile for Quiz.cpp

#ifndef QUIZ_H
#define QUIZ_H

// Include statements
#include <string>

// Class declaration
class Quiz
{
private:
    std::string question = "";
    std::string answer = "";
    static int score;

public:
    Quiz();
    Quiz(string, string);

    std::string getQuestion();
    std::string getAnswer();
    static int getScore();
    int getCount();

    static void updateScore(int);
};

#endif // QUIZ_H