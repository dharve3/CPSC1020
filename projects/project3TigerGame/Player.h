// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 3/30/2024
// Project 3 - TigerGame
// Time: ~4 Hours
// Desc: Headerfile for class Player, each player has a hand and a score, note all values are public

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
    Hand hand;
    int score {0}; // Initialize score to 0 using in-class initialization

    // Constructors
    Player() = default;
    Player(Deck& deck, int N): hand(deck, N) {} // Parameterized constructor to initialize hand with N cards // CHANGE
};

#endif // PLAYER_H_