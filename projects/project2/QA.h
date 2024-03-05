// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: 
// Desc: Headerfile for Quiz.cpp

#ifndef QUIZ_H
#define QUIZ_H

// Include statements
#include <string>

using namespace std;

// Class declaration
class Quiz {
private:
    string question {""};
    string answer {""};
    static int score;

public:
    Quiz() = default;
    Quiz(string, string);

    string getQuestion();
    string getAnswer();
    static int getScore();
    int getCount();

    static void updateScore(int);
};

#endif // QUIZ_H