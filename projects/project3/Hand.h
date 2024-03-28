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
    Card dealCard(int num) const;
    int getHandSize() const;
private:
    mutable std::vector<Card> hand; 
    // made mutable so that dealCard can modify and still work with const hand objects
};

#endif // HAND_H_