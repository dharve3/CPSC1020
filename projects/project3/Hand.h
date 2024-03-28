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
    int getHandSize();
private:
    std::vector<Card> hand;
};

#endif // HAND_H_