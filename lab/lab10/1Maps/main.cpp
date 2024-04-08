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
    std::string sentence = "Remember I have been prophesying for the past sixty five years that in the natural course of things I a square a mere Square shall evolve into a Pentagon or five sided figure and from there into a Hexagon or six sided figure and thence into a Cube or in other words into the so called regular solids with a myriad of various other forms of which the chief are the tetrahedron the octahedron and the dodecahedron";

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