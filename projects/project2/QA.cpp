// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: 
// Desc: 

#include "QA.h"

std::string QA::getQuestion() {
    // Logic to parse text file for question
    return question;
}

std::string QA::getAnswer() {
    // Logic to parse text file for answer
    return answer;
}

static int QA::getScore() {
    return score;
}

// Returms the number of letters in a question and answer
// Ignores whitespace and punctuation
int QA::letterCount() {
    int count = 0;
    // Need to input str as question and answer?
    // for (char c : str) {
    //     if (isalpha(c)) {
    //         count++;
    //     }
    // }
    return count;
}

static void QA::updateScore(int val) {
    if (val != -1)
        score += val;
    else if (score != 0)
        score += val;
}