#include <iostream>
#include "Recommend.h"

int main() {
	// File name containing recommendations data
	std::string fileName = "recommendations.txt";

	// Create an instance of Recommend class
	Recommend recommender(fileName);

	// Print total number of books and recommenders
	std::cout << "Total number of books: " << recommender.getBookCount() << std::endl;
	std::cout << "Total number of recommenders: " << recommender.getRecommenderCount() << std::endl;

	// Print recommendation ratings
	recommender.printRecommendationRatings();

	// Print dot products
	recommender.printDotProducts("Recommender1");

	// Print book averages
	recommender.printAverages();

	// Print similar list
	recommender.printSimilarList("Recommender1");

	// Compute recommendation for a specific recommender
	recommender.computeRecommendation("Recommender1");

	return 0;
}
