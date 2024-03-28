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

    cout << endl << "Current scores:" << endl;
    cout << "Human: " << humanScore << endl;
    cout << "Computer: " << computerScore << endl;
} // Note: Nice reusability here


int main() {
    cout << "Welcome to TigerGame!" << endl;
    // 1. Create a deck of cards and shuffle it.
    Deck deckOfCards;
    deckOfCards.shuffle();

    // 2. Create two players, each one with 6 cards in their hand.
    const int numCardsInHand = 6;
    Player human(deckOfCards, numCardsInHand);
    Player computer(deckOfCards, numCardsInHand);

    cout << "The deck was shuffled and each player has drawn 6 cards." << endl;

    int humanScore = 0;
    int computerScore = 0;

    // 3. Play six rounds. In each round:
    // This said five rounds before but the doc says 6??
    const int numRounds = 6;
    for (int round = 1; round <= numRounds; round++) {
        cout << endl << "Round " << round << endl;
        cout << "-------" << endl << endl;

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
    }
    // 4. Print final game results.
    cout << endl << "FINAL SCORE:" << endl;
    cout << "Human: " << humanScore << endl;
    cout << "Computer: " << computerScore << endl;

    if (humanScore > computerScore) {
        cout << endl << "You have won!" << endl;
    } else if (humanScore < computerScore) {
        cout << endl << "Computer has won!" << endl;
    } else {
        cout << endl << "It's a tie!" << endl;
    }

    return 0;
}
