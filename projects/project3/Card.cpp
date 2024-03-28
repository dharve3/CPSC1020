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