// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/30/2024
// Project 3 - TigerGame
// Time: ~4 Hours
// Desc: Headerfile for class Deck, a deck of 30 cards

#ifndef DECK_H_
#define DECK_H_

#include "Card.h"
#include <random>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Deck
{
public:
    // Constructor
    Deck();

    // static int myrandom(int i);
    void shuffle();
    Card drawCard();
    int getDeckSize();
private:
    std::vector<Card> deck;
};
  

#endif // DECK_H_