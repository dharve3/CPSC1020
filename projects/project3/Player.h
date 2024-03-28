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
    Player(); // Default constructor
    Player(Deck& deck, int N); // Parameterized constructor to initialize hand with N cards
    // Getters
    const Hand& getHand();
    int getScore();
    // Setters
    void setScore(int newScore);
private:
    Hand hand;
    int score {0}; // Initialize score to 0 using in-class initialization
};

// Default constructor definition
inline Player::Player() {}

// Parameterized constructor definition
inline Player::Player(Deck& deck, int N) : hand(deck, N) {}

// Getter for hand
inline const Hand& Player::getHand() const {
    return hand;
}

// Getter for score
inline int Player::getScore() const {
    return score;
}

// Setter for score
inline void Player::setScore(int newScore) {
    score = newScore;
}

#endif // PLAYER_H_