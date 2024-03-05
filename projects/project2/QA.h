// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: 
// Desc: Headerfile for Quiz.cpp

#ifndef QA_H
#define QA_H

// Include statements
#include <string>

using namespace std;

// Class declaration
class QA {
private:
    string question {""};
    string answer {""};
    static int score;

public:
    QA() = default;
    QA(string q, string a) : question(q), answer(a) {}

    string getQuestion();
    string getAnswer();
    static int getScore();
    int getCount();

    static void updateScore(int val);
};

#endif // QA_H