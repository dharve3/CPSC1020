/* This program demonstrates the use of a std::map. When you run the
program, it will prompt you to enter a sentence. After entering the
sentence, it will output each word in the sentence along with the number
of times it appears.

NOTE: a few pieces of the program have been removed for you to figure
out and thereby learn maps. */

#include <iostream>
#include <map>
#include <sstream>

int main() {
    std::string sentence = "In the beginning was the Word and the Word was with God and the Word was God the same was in the beginning with God";

    // [declare a map which consists of a string as key and int as value, called wordcount]
    std::map<std::string, int> wordCount;

    std::istringstream iss(sentence);
    std::string word;

    while (iss >> word) {
        // [increment the map’s int using word as the key]
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}