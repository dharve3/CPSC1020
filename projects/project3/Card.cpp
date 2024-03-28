#include "Card.h"

// Returns formatted string for displaying a card
std::string Card::strCard() const {
    return (getColor() + ":" + std::to_string(getRank()));
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