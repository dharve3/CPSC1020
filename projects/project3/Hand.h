// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/30/2024
// Project 3 - TigerGame
// Time: ~4 Hours
// Desc: Headerfile for class Hand, a set of cards drawn from a deck

#ifndef HAND_H_
#define HAND_H_

#include "Card.h"
#include "Deck.h"
#include <vector>
#include <string>
#include <sstream>

class Hand
{
public:
    // Constructors
    Hand() = default;
    Hand(Deck deck, int N);

    std::string strHand() const;
    Card dealCard(int num);
    int getHandSize() const;
private:
    std::vector<Card> hand; 
};

#endif // HAND_H_