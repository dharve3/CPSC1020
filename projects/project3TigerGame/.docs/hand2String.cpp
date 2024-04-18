// demo of how to convert a card into a string
// uses 2 different techniques: a string and a stringstream
// part of Project 3

#include <iostream>
#include <sstream>
using namespace std;

enum Color { purple, orange, black };

// using a struct to simulate your Card class
struct Card {
	Color color;
	int rank;
};

// function is passed a card (not necessary to pass in class version)
// and converts to color:rank format
// for example: purple:5 or orange:3
// this version uses a string object
string strCard1(Card card) {
  string myString;

	// first handle the color part based on the enumerated type
	switch (card.color) {
		 case purple: myString = "purple"; break;
		 case orange: myString = "orange"; break;
		 case black:  myString = "black"; break;
	}
	// now add the rank value as string
	myString += ":" + to_string(card.rank);

	// return the results
  return myString;
}

// this version uses stringstream
string strCard2(Card card) {
  stringstream ss;

	// first handle the color part based on the enumerated type
	switch (card.color) {
		 case purple: ss << "purple"; break;
		 case orange: ss << "orange"; break;
		 case black:  ss << "black"; break;
	}
	// now add the rank value as string
	ss << ":" << card.rank;

	// return the results
  return ss.str();
}

int main() {
  Card c1 = {purple, 5};
	Card c2 = {black, 10};

	cout << strCard1(c1) << endl;
	cout << strCard2(c2) << endl;
	}
