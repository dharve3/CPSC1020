#include "Card.h"

std::string Card::strCard() {
    return (getColor() + ":" + std::to_string(getRank()));
}

int Card::getRank() {
    return rank;
}

Card::Color Card::getColor() {
    return color;
}

int Card::getValue() {
    return value;
}