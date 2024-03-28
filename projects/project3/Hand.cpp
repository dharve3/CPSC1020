#include "Hand.h"

// Parameterized constructor to draw N cards from the deck
Hand::Hand(Deck deck, int N) {
    for (int i = 0; i < N; i++) {
        hand.push_back(deck.drawCard());
    }
}

// Shows the current hand
std::string Hand::strHand() const {
    std::string handStr;
    for (size_t i = 0; i < hand.size(); ++i) {
        handStr += "[" + std::to_string(i + 1) + "] " + hand[i].strCard() + " ";
    }
    return handStr;
}
// Deals a card from the hand based on its position
Card Hand::dealCard(int num) const {
    Card dealtCard = hand[num - 1]; // Adjusting for 1-based indexing
    hand.erase(hand.begin() + num - 1);
    return dealtCard;
}
// Returns the current number of cards in the hand
int Hand::getHandSize() const {
    return hand.size();
}