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

// Class declaration
class QA {
private:
    std::string question {""};
    std::string answer {""};
    static int score;

public:
    QA() = default;
    QA(std::string q, std::string a) : question(q), answer(a) {}

    std::string getQuestion() const;
    std::string getAnswer() const;
    static int getScore();
    int letterCount(const std::string& str);

    static void updateScore(int val);

    friend std::string printResult(int questions, int correct, int wrong);
};

#endif // QA_H