// Note: There is no Player.cpp file.
// The player class is simple enough to
// implement everything in Player.h

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Hand.h"
#include "Deck.h"

class Player
{
public:
    // Constructors
    Player() = default;
    Player(Deck& deck, int N): hand(deck, N) {} // Parameterized constructor to initialize hand with N cards
    // Getters
    Hand& getHand() const {
        return hand;
    }
    int getHandSize() const {
        return getHand().getHandSize();
    }
    int getScore() const {
        return score;
    }
    // Setters
    void setScore(int newScore) {
        score = newScore;
    }
private:
    Hand hand;
    int score {0}; // Initialize score to 0 using in-class initialization
};

#endif // PLAYER_H_