// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/9/2024
// Project 2 - Quiz Game
// Time: 
// Desc: 

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>

#include "QA.h"
#include "printResult.h"

int main(int argc, char* argv[]) {
    // Check for the correct number of command line arguments
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }
    // Check if the file could be read
    std::ifstream infile(argv[1]);
    if (!infile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 1;
    }

    std::vector<QA> quizVector;
    std::string line, quesition, answer;

    // Parse file for Question and Answer per line and input to array with QA objects
    while (std::getline(infile, line)) {
        if (line.find("Question:") != std::string::npos) {
            quesition = line.substr(line.find(":") + 1);
            std::getline(infile, line);
            if (line.find("Answer:") != std::string::npos) {
                answer = line.substr(line.find(":") + 1);
                quizVector.emplace_back(QA(quesition, answer));
            }
        }
    }

    // Shuffles the questions
    srand(unsigned(time(0)));
    std::random_shuffle(quizVector.begin(), quizVector.end());

    // Start the quiz game
    int correct = 0, wrong = 0;
    // Loop over each question in the vector
    for (const QA& qa : quizVector) {
        // Display question and get player answer
        std::string playerAnswer;
        std::cout << qa.getQuestion() << std::endl;
        std::cout << "Type in your answer: ";
        std::cin >> playerAnswer;

        // Check if answer is right or wrong
        if (playerAnswer == qa.getAnswer()) {
            std::cout << "Correct!" << std::endl;
            QA::updateScore(1);
            correct++;
        } else {
            std::cout << "Wrong! Correct answer: " << qa.getAnswer() << std::endl;
            QA::updateScore(-1);
            wrong++;
        }

        std::cout << "Current score: " << QA::getScore() << std::endl;
    }

    // Show results of the quiz game
    std::cout << printResult(quizVector.size(), correct, wrong);

    return 0;
}