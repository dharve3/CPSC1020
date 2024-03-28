#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

// Function to display the current hand of the human player
void displayHumanHand(const Hand& hand) {
    cout << "Your hand: " << hand.strHand() << endl;
} // Note: This is kinda unessecary but it aids readability later

// Function to determine the winner of a round
void determineWinner(const Card& computerCard, const Card& playerCard, int& humanScore, int& computerScore) {
    int playerValue = playerCard.getValue();
    int computerValue = computerCard.getValue();

    if (playerValue == computerValue) {
        cout << "Tie!" << endl;
    } else if (playerValue > computerValue) {
        cout << "You win this round!" << endl;
        humanScore += playerValue;
    } else {
        cout << "The computer wins this round!" << endl;
        computerScore += computerValue;
    }

    cout << "Current scores:" << endl;
    cout << "Human: " << humanScore << endl;
    cout << "Computer: " << computerScore << endl;
} // Note: Nice reusability here


int main() {
    cout << "Welcome to TigerGame!" << endl;
    // 1. Create a deck of cards and shuffle it.
    Deck deck;
    deck.shuffle();

    // 2. Create two players, each one with 6 cards in their hand.
    const int numCardsInHand = 6;
    Player human(deck, numCardsInHand);
    Player computer(deck, numCardsInHand);

    int humanScore = 0;
    int computerScore = 0;

    // 3. Play five rounds. In each round:
    const int numRounds = 5;
    for (int round = 1; round <= numRounds; round++) {
        cout << "Round " << round << endl;
        cout << "-------" << endl;

        //    - Have computer deal a card from their hand.
        Card computerCard = computer.getHand().dealCard(1);
        cout << "The computer plays: " << computerCard.strCard() << endl;

        //    - Show human their hand of cards so that they can make a selection.
        displayHumanHand(human.getHand());

        //    - Have human deal their card.
        int selectedCardIndex;
        do {
            cout << "Which card do you want to play? ";
            cin >> selectedCardIndex;
        } while (selectedCardIndex < 1 || selectedCardIndex > human.getHandSize()); // Input validation
        Card playerCard = human.getHand().dealCard(selectedCardIndex); // Play the card

        cout << "You played: " << playerCard.strCard() << endl;

        //    - Determine who won the round and update points accordingly.
        determineWinner(computerCard, playerCard, humanScore, computerScore);
        //    - Print results for current round.
        cout << endl;
    }
    // 4. Print final game results.
    cout << "FINAL SCORE:" << endl;
    cout << "Human: " << humanScore << endl;
    cout << "Computer: " << computerScore << endl;

    if (humanScore > computerScore) {
        cout << "You have won!" << endl;
    } else if (humanScore < computerScore) {
        cout << "Computer has won!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
