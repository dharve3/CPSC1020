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

    void shuffle();
    Card drawCard();
    int getDeckSize();
private:
    std::vector<Card> deck;
};
  

#endif // DECK_H_