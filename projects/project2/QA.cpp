// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: 
// Desc: 

#include "QA.h"

std::string QA::getQuestion() const {
    return question;
}

std::string QA::getAnswer() const {
    return answer;
}

static int QA::getScore() const {
    return score;
}

// Returms the number of letters in a question and answer
// Ignores whitespace and punctuation
int QA::letterCount(const std::string& str) {
    int count = 0;
    // Input question and answer as str?
    for (char c : str) {
        if (isalpha(c)) {
            count++;
        }
    }
    return count;
}

static void QA::updateScore(int val) {
    if (val != -1)
        score += val;
    else if (score != 0)
        score += val;
}