#include "Deck.h"

// initalizes the deck with 15 purple cards, 10 orange cards, and 5 black cards
Deck::Deck() {
    for (int i = 1; i <= 15; i++) {
        deck.push_back(Card(i, Card::Color::purple));
    }
    for (int i = 1; i <= 10; i++) {
        deck.push_back(Card(i, Card::Color::orange));
    }
    for (int i = 6; i <= 10; i++) {
        deck.push_back(Card(i, Card::Color::black));
    }
}

// Shuffles the deck
void Deck::shuffle() {
    unsigned seed = 0;
    std::shuffle(std::begin(deck), std::end(deck), std::default_random_engine(seed)); // seed of 0 for testing 
}
// Draws first card from deck and removes it
Card Deck::drawCard() {
    Card c = deck.front();
    deck.erase(deck.begin());
    return c;
}
// Returns the current number of cards in the deck
int Deck::getDeckSize() {
    return deck.size();
}