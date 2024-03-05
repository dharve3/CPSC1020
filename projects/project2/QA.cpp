// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: 
// Desc: 

#include "QA.h"

string QA::getQuestion() {
    // Logic to parse text file for question
    return question;
}

string QA::getAnswer() {
    // Logic to parse text file for answer
    return answer;
}

static int QA::getScore() {
    return score;
}

int QA::getCount() {
    // return the number of questions
}

static void QA::updateScore(int val) {
    if (val != -1)
        score += val;
    else if (score != 0)
        score += val;
}