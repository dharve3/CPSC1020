// demo of how to efficiently validate the player's card selection
// part of Project 3

#include <iostream>
using namespace std;

int main() {
  int choice;
	int handSize {4}; // assume there are 4 cards left in player's hand

  cout << "Which card do you want to play? ";
	cin >> choice;
  while (choice < 1 || choice > handSize) {
		cout << "Invalid choice. Please select a card by entering a number between 1 and " << handSize << ": ";
		cin >> choice;
	}
	cout << "You selected card: " << choice << endl;
}
