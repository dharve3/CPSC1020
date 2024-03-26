#include "Card.h"

// Returns formatted string for displaying a card
std::string Card::strCard() {
    return (getColor() + ":" + std::to_string(getRank()));
}

// Accessors
int Card::getRank() {
    return rank;
}
Card::Color Card::getColor() {
    return color;
}
int Card::getValue() {
    return value;
}