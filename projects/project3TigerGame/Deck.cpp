// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/30/2024
// Project 3 - TigerGame
// Time: ~4 Hours
// Desc: Sourcefile for class Deck, a deck of 30 cards

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

// Random generator function:
// int Deck::myrandom(int i) {
//     return (std::rand() % i);
// }

// Shuffles the deck
void Deck::shuffle() {
    // std::srand(unsigned (std::time(0))); // Not using time for testing reasons
    std::srand(unsigned (0)); // seed of 0 for testing 
    // std::random_shuffle(deck.begin(), deck.end(), myrandom); // using custom rng
    std::random_shuffle(deck.begin(), deck.end()); // using built in
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