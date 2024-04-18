// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/30/2024
// Project 3 - TigerGame
// Time: ~4 Hours
// Desc: Sourcefile for class Card, a card of one of 3 colors, and a rank, to determine the cards value.

#include "Card.h"

// Returns formatted string for displaying a card
std::string Card::strCard() const {
    static const std::string colorStrings[] = {"purple", "orange", "black"};
    // Used an array matching the enum rather than a switch statement
    std::string colorStr = colorStrings[getColor()];
    return (colorStr + ":" + std::to_string(getRank()));
}

// Accessors
int Card::getRank() const {
    return rank;
}
Card::Color Card::getColor() const {
    return color;
}
int Card::getValue() const {
    return value;
}