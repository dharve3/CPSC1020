#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{
public:
    // public enum Color
    enum Color {purple, orange, black};
    
    // Constructors
    Card() = default;
    Card(int r, Color c): rank(r), color(c) {}

    // Formatted string for displaying card
    std::string strCard() const;
    // Accessors
    int getRank() const;
    Color getColor() const;
    int getValue() const;
private:
    int rank {0};
    Color color {purple};
    int value {0};
};
  

#endif // CARD_H_