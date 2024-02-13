// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 
// Project 2
// Time: 
// Desc: 

#include "Quiz.h"

Quiz::Quiz()

Quiz::Quiz(std::string q, std::string a) {
    question = q;
    answer = a;
}

std::string getQuestion() {
    // Logic to parse text file for question
    return question;
}

std::string getAnswer() {
    // Logic to parse text file for answer
    return answer;
}

static int getScore() {
    return score;
}

int getCount() {
    // return the number of questions
}

static void updateScore(int val) {
    if (val != -1)
        score += val;
    else if (score != 0)
        score += val;
}