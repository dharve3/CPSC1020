#include "Recommend.h"

bool DEBUG = true;

/*==========================================================================
 bool compareRatings(const pair<string, double>&, const pair<string, couble>&)) - a helper function to compare by rating and then
 book title - used by sort
===========================================================================*/
bool compareRatings(const pair<string, double>& a, const pair<string, double>& b) {
	// Compare ratings
	if (a.second != b.second) {
		return a.second > b.second; // Higher rating comes first
	} else {
		// If ratings are equal, compare book titles
		return a.first < b.first; // Alphabetical order for book titles
	}
}

/*==========================================================================
 Recommend(string)
 - constructor:
 - open file from file name passed in
 - read through file (2X), removing possible CR (Windows files)
 - create a set of books and produces a vector of books sorted in title order
 - build a recommender ratings map that shows the ratings for each recommendation
 note: if a recommender does not rate a given title then the rating should be 0
 call this ratings
 - compute the average rating for each book
 - call the book averages

 DEBUGGING NOTE: use LOTS of "if (DEBUG) cout ...." statements in this code
===========================================================================*/
Recommend::Recommend(string fn) {
	ifstream inputFile(fn);

	if (DEBUG) {
		cout << "Reading file: " << fn << endl;
	}

	// Check if file opened successfully
	if (!inputFile.is_open()) {
		cerr << "Error opening file: " << fn << endl;
		exit(1); 
	}

	// Temp vars to store data while reading from file
	string line, recommenderName, bookTitle;
	int rating;

	// First pass through the file, remove duplicate entries
	set<string> bookSet;
	while (getline(inputFile, recommenderName)) { // Gets name of recommender
		// Remove carriage return (windows) if present
		recommenderName = removeCR(recommenderName);

		// Read book title
		getline(inputFile, bookTitle);
		// Remove carriage return (windows) if present
		bookTitle = removeCR(bookTitle);

		// Read rating
		getline(inputFile, line);
		rating = stoi(line); // store as int

		// Debug to see data as its read in
		if (DEBUG) {
			cout << "Reading data from file (1st): " << recommenderName << " - " << bookTitle << " - " << rating << endl;
		}

		// Store book title in set
		bookSet.insert(bookTitle);
	}

	// Convert the set to a vector and sort
	books.assign(bookSet.begin(), bookSet.end());
	sort(books.begin(), books.end());

	// Debug to see all the sorted books
	if (DEBUG) {
		cout << "Sorted books from file: ";
		for (const auto& book : books) {
			cout << book << ", ";
		}
		cout << endl;
	}

	// Second pass through the file, build ratings map
	inputFile.clear(); // Clears EOF flag
	inputFile.seekg(0); // Resets file ptr to start of file
	while (getline(inputFile, recommenderName)) {
		// Remove carriage return (windows) if present
		recommenderName = removeCR(recommenderName);

		// Read book title
		getline(inputFile, bookTitle);
		// Remove carriage return (windows) if present
		bookTitle = removeCR(bookTitle);

		// Read rating
		getline(inputFile, line);
		rating = stoi(line); // store as int

		// Debug to see ratings as they are read in
		if (DEBUG) {
			cout << "Reading rating from file (2nd): " << recommenderName << " - " << bookTitle << " - " << rating << endl;
		}

		// Find index of book in vector
		int bookIndex = getBookIndex(bookTitle);
		if (bookIndex != -1) {
			// If valid index (found), update rating for the recommender
			ratings[recommenderName][bookIndex] = rating;
		} else {
			cerr << "Book not found: " << bookTitle << endl;
		}
	}

	// Compute average rating for each book
	computeBookAverages();
}

/*==========================================================================
 computeRecommend(RECOMMENDER)
 - find the top 3 similar recommenders
 - find the highest rated books from the top 3 recommenders
 ===========================================================================*/
void Recommend::computeRecommendation(RECOMMENDER requester) {
	if (DEBUG) {
		cout << "Computing recommendation for: " << requester << endl;
		cout << "Computing similarities with other recommenders..." << endl;
	}

	// Compute similarities with other recommenders
	computeSimilarities(requester);

	// Sort similarList by ratings
	// sort(similarList.begin(), similarList.end(), compareRatings);
	// I believe this is redundant

	// Get top 3 similar recommenders
	vector<pair<RECOMMENDER, double>> topSimilar(similarList.begin(), similarList.begin() + min(3, static_cast<int>(similarList.size())));

	// Compute recommendations based on top similar recommenders
	computeSimAvg(topSimilar);

	// Print recommendations
	printRecommendation(requester);
}

/*==========================================================================
 computeSimAvg(BOOK_AVG_LIST)
 - takes top 3 most similar names to recommender
 - averages the books that are non 0
 - returns best books in order
===========================================================================*/
void Recommend::computeSimAvg(BOOK_AVG_LIST topSimilar) {
	if (DEBUG) {
		cout << "Computing similarity averages for top similar recommenders..." << endl;
		cout << "Number of top similar recommenders: " << topSimilar.size() << endl;
	}
	// Clear previous simAvg
	simAvg.clear();

	// Calculate the sum of ratings for each book
	map<BOOK_TITLE, double> sumRatings;
	map<BOOK_TITLE, int> countRatings;

	// Iterate through the top simialr recommenders
	for (const auto& sim : topSimilar) {
		RECOMMENDER recommender = sim.first;
		double similarity = sim.second;

		// Get the ratings for the current ecommender
		const vector<RATINGS>& recommenderRatings = ratings[recommender];

		// Update the sum and count of ratings for each book
		for (size_t i = 0; i < books.size(); ++i) {
			double rating = recommenderRatings[i];
			if (rating != 0) {
				sumRatings[books[i]] += rating * similarity;
				countRatings[books[i]]++;
			}
		}
	}

	// Calculate the average rating for each book
	for (const auto& entry : sumRatings) {
		double averageRating = entry.second / countRatings[entry.first];
		simAvg.push_back({entry.first, averageRating});
	}

	// Sort simAvg by highest average rating
	sort(simAvg.begin(), simAvg.end(), [](const pair<BOOK_TITLE, double>& a, const pair<BOOK_TITLE, double>& b) {
		return a.second > b.second;
	});
}

/*==========================================================================
 computeBookAverages()
 - compute and store (using bookAverages) the average rating for each book
 from all non 0 ratings
 - sort by highest rating
===========================================================================*/
void Recommend::computeBookAverages() {
	if (DEBUG) {
		cout << "Computing book averages..." << endl;
		cout << "Number of books: " << books.size() << endl;
	}

	// Clear previous bookAverages
	bookAverages.clear();

	// Loop through all books
	for (const auto& book : books) {
		double sum = 0.0;
		int count = 0;

		// Loop through all recommenders
		for (const auto& entry : ratings) {
			double rating = entry.second[getBookIndex(book)];
			if (rating != 0) {
				sum += rating;
				count++;
			}
		}
		
		// Calculate average rating for the book
		double averageRating = (count > 0) ? (sum / count) : 0.0;

		// Add book and its average rating to bookAverages
		bookAverages.push_back(make_pair(book, averageRating));
	}

	// Sort bookAverages by average rating
	sort(bookAverages.begin(), bookAverages.end(), compareRatings);
}

/*==========================================================================
 computeSimilarities(RECOMMENDER)
 - finds the most similar recommendations to the recommender using dot product
 - sort by highest rating
 ==========================================================================*/
void Recommend::computeSimilarities(RECOMMENDER requester) {
	if (DEBUG) {
		cout << "Computing similarities for: " << requester << endl;
		cout << "Number of recommenders: " << ratings.size() << endl;
	}

	// Clear previous similarList
	similarList.clear();

	// Loop through all recommenders
	for (const auto& recommender : recommenders) {
		if (recommender != requester) {
			double dotProduct = 0.0, norm1 = 0.0, norm2 = 0.0;

			// Compute dot product and norms
			for (size_t i = 0; i < books.size(); ++i) {
				double rating1 = ratings[requester][i];
				double rating2 = ratings[recommender][i];
				dotProduct += rating1 * rating2;
				norm1 += rating1 * rating1;
				norm2 += rating2 * rating2;
			}

			// Compute similarity score (cosine similarity)
			double similarity = 0.0;
			if (norm1 > 0 && norm2 > 0) {
				similarity = dotProduct / (sqrt(norm1) * sqrt(norm2));
			}

			// Add to similarList
			similarList.push_back(make_pair(recommender, similarity));
		}
	}

	// Sort similarList by similarity score
	sort(similarList.begin(), similarList.end(), compareRatings);
}

/*==========================================================================
 bool checkRecommender(RECOMMENDER) - given a recommender's name, return
 true if recommender has made ratings, otherwise return false
 ==========================================================================*/
bool Recommend::checkRecommender(RECOMMENDER recommender) {
	// Check if recommender exists in ratings
	return (ratings.find(recommender) != ratings.end());
}

/*==========================================================================
 double getBookAverage(BOOK_TITLE) - return average rating from bookAverages
 for a given book
 ==========================================================================*/
double Recommend::getBookAverage(BOOK_TITLE book) {
	// Find the book in bookAverages
	auto it = find_if(bookAverages.begin(), bookAverages.end(), [&](const pair<BOOK_TITLE, double>& entry) {
		return entry.first == book;
	}); // Uses a lambda function (crazy i know) for find_if
		// Reference of the pair to determine if an average exists for the book we're searching for

	// If book is found, return its average rating; otherwise return 0
	if (it != bookAverages.end()) {
		return it->second;
	} else {
		return 0.0;
	}
}

/*==========================================================================
 int getBookCount() - return the number of books
 ==========================================================================*/
int Recommend::getBookCount() {
	return books.size();
}

/*==========================================================================
 int getRecommenderCount() - return the number of recommenders in ratings
 ==========================================================================*/
int Recommend::getRecommenderCount() {
	return recommenders.size();
}

/*==========================================================================
 int getBookIndex(BOOK_TITLE) - return the index of a given book title in
 the books vector
 ==========================================================================*/
int Recommend::getBookIndex(BOOK_TITLE book) {
	// Find the index of the book in books vector
	auto it = find(books.begin(), books.end(), book);
	if (it != books.end()) {
		return distance(books.begin(), it);
	} else {
		return -1; // Book not found
	}
}

/*==========================================================================
 double getRecommenderBookRating(RECOMMENDER, BOOK_TITLE)
 - find the position of the title in books vector
 - find the recommender in ratings vector
 - return the recommender's rating for that title
 ==========================================================================*/
double Recommend::getRecommenderBookRating(RECOMMENDER recommender, BOOK_TITLE book) {
	if (DEBUG) {
		cout << "Searching for rating of book '" << book << "' for recommender '" << recommender << "'" << endl;
	}

	// Find the index of the book in books vector
	int bookIndex = getBookIndex(book);

	// Check if book exists
	if (bookIndex != -1) {
		// Find the recommender in ratings map
		auto it = ratings.find(recommender);
		if (it != ratings.end()) {
			// Get rating for the book from recommender's ratings list
			return it->second[bookIndex];
		} else {
			cerr << "Recommender not found: " << recommender << endl;
		}
	} else {
		cerr << "Book not found: " << book << endl;
	}

	// Return 0 if book or recommender not found
	return 0.0;
}

/*==========================================================================
printDotProducts(RECOMMENDER) - display dot products for current recommender
 ==========================================================================*/
void Recommend::printDotProducts(RECOMMENDER requester) {
	if (DEBUG) {
		cout << "Printing dot products for: " << requester << endl;
	}

	cout << "DOT PRODUCTS" << endl;
	cout << "============" << endl;

	// Check if any recommendation has been made
	if (simAvg.empty()) {
		cout << "Request a recommendation" << endl;
		return;
	}

	// Loop through all recommenders
	for (const auto& recommender : recommenders) {
		// Skip the requester itself
		if (recommender == requester) {
			continue;
		}

		// Calculate dot product
		// NOTE: dot product is also calculated in computeSimilarities(), perhaps find a way to reuse or make a helper function to do so
		double dotProduct = 0.0;
		for (size_t i = 0; i < books.size(); ++i) {
			dotProduct += ratings[requester][i] * ratings[recommender][i];
		}

		// Print dot product calcultion
		cout << recommender << ": ";
		for (size_t i = 0; i < books.size(); ++i) {
			cout << ratings[requester][i] << " * " << ratings[recommender][i] << " + ";
		}
		cout << " = " << dotProduct << endl;
		
	}
}

/*==========================================================================
 string strAverages() - return a string of computeBookAverages
 formatted for display
 ==========================================================================*/
string Recommend::strAverages() {
	stringstream ss;
	ss << "AVERAGES" << endl;
	ss << "========" << endl;
	for (const auto& entry : bookAverages) {
		ss << entry.first << ": " << fixed << setprecision(2) << entry.second << endl;
	}
	return ss.str();
}

/*==========================================================================
 printAverages() - display the bookAverages using strAverages()
 ==========================================================================*/
void Recommend::printAverages() {
	cout << strAverages();
}

/*==========================================================================
 string strRecommendationRatings() - return a string of ratings as read in
 from the file
 ==========================================================================*/
string Recommend::strRecommendationRatings() {
	stringstream ss;
	ss << "RECOMMENDATION RATINGS" << endl;
	ss << "======================" << endl;
	for (const auto& entry : ratings) {
		ss << entry.first << ": ";
		for (const auto& rating : entry.second) {
			ss << rating << " ";
		}
		ss << endl;
	}
	return ss.str();
}

/*==========================================================================
 printRecommendationRatings - display ratings
 ==========================================================================*/
void Recommend::printRecommendationRatings() {
	cout << strRecommendationRatings();
}

/*==========================================================================
 string strSimilarList() - return a string of similarList
 ==========================================================================*/
string Recommend::strSimilarList() {
	stringstream ss;
	ss << "SIMILARITIES" << endl;
	ss << "============" << endl;

	// Check if any recommendation has been made
	if (similarList.empty()) {
		ss << "Request a recommendation" << endl;
		return ss.str();
	}

	// Construct the string representation of similarities
	for (const auto& sim : similarList) {
		ss << sim.first << ": " << fixed << setprecision(2) << sim.second << endl;
	}

	return ss.str();
}

/*==========================================================================
 printSimilarList(RECOMMENDER) - display similarList for given recommender
 ==========================================================================*/
void Recommend::printSimilarList(RECOMMENDER requester) {
	if (DEBUG) {
		cout << "Printing similar list for: " << requester << endl;
	}

	cout << "SIMILARITIES" << endl;
	cout << "============" << endl;

	// Check if any recommendation has been made
	if (similarList.empty()) {
		cout << "Request a recommendation" << endl;
		return;
	}

	// Print similarities
	for (const auto& sim : similarList) {
		cout << sim.first << ": " << fixed << setprecision(2) << sim.second << endl;
	}
}

/*==========================================================================
 string strSimAvg() - return a string of simAvg
 ==========================================================================*/
string Recommend::strSimAvg() {
	stringstream ss;
	ss << "SIMILAR AVERAGES" << endl;
	ss << "================" << endl;

	// Check if any recommendation has been made
	if (simAvg.empty()) {
		ss << "Request a recommendation" << endl;
		return ss.str();
	}

	// Construct the string representation of similar averages
	for (const auto& sim : simAvg) {
		ss << sim.first << ": " << fixed << setprecision(2) << sim.second << endl;
	}

	return ss.str();
}

/*==========================================================================
 printSimAvg(RECOMMENDER) - display simAvg for given recommender
 ==========================================================================*/
void Recommend::printSimAvg(RECOMMENDER requester) {
	if (DEBUG) {
		cout << "Printing similar averages for: " << requester << endl;
	}

	cout << "SIMILAR AVERAGES" << endl;
	cout << "================" << endl;

	// Check if any recommendation has been made
	if (simAvg.empty()) {
		cout << "Request a recommendation" << endl;
		return;
	}

	// Get the top 3 similar recommenders
	vector<pair<BOOK_TITLE, double>> topSimilar(simAvg.begin(), simAvg.begin() + min(3, static_cast<int>(simAvg.size())));

	// Print top similar recommenders
	for (const auto& similar : topSimilar) {
		cout << similar.first << ": " << fixed << setprecision(2) << similar.second << endl;
	}
}

/*==========================================================================
 string strFancyRatings() - return a fancy formatted string of ratings
 ==========================================================================*/
string Recommend::strFancyRatings() {
	stringstream ss;
	ss << "FANCY RATINGS" << endl;
	ss << "=============" << endl;
	for (const auto& entry : ratings) {
		ss << entry.first << ":" << endl;
		for (size_t i = 0; i < books.size(); ++i) {
			if (entry.second[i] != 0) {
				ss << setw(20) << left << books[i] << ": " << entry.second[i] << endl;
			}
		}
		ss << endl;
	}
	return ss.str();
}

/*==========================================================================
 printFancyRatings() - display a fancy formatted string of ratings
 ==========================================================================*/
void Recommend::printFancyRatings() {
	cout << strFancyRatings();
}

/*==========================================================================
 string strRecommendation() - return a string of current recommendations
 ==========================================================================*/
string Recommend::strRecommendation() {
	stringstream ss;
	ss << "RECOMMENDATIONS" << endl;
	ss << "===============" << endl;

	// Check ifo any recommendation has been made
	if (simAvg.empty()) {
		ss << "Request a recommendation" << endl;
		return ss.str();
	}

	// Get the top rated books from simAvg
	vector<pair<BOOK_TITLE, double>> topRecommendations(simAvg.begin(), simAvg.begin() + min(3, static_cast<int>(simAvg.size())));

	// Print top recommendations
	for (const auto& recommendation : topRecommendations) {
		ss << recommendation.first << ": " << fixed << setprecision(2) << recommendation.second << endl;
	}

	return ss.str();
}

/*==========================================================================
 string strBooks() - return a string of books
 ==========================================================================*/
string Recommend::strBooks() {
	stringstream ss;
	for (const auto& book : books) {
		ss << book << " / ";
	}
	return ss.str();
}

/*==========================================================================
 printBooks() - display books
 ==========================================================================*/
void Recommend::printBooks() {
	cout << "BOOKS: " << strBooks() << endl;
}

/*==========================================================================
 string strNames() - return a string of recommender names
 ==========================================================================*/
string Recommend::strNames() {
	stringstream ss;
	ss << "RECOMMENDER NAMES" << endl;
	ss << "=================" << endl;
	for (const auto& name : recommenders) {
		ss << name << endl;
	}
	return ss.str();
}

/*==========================================================================
 printNames() - display recommender names
 ==========================================================================*/
void Recommend::printNames() {
	cout << strNames();
}

/*==========================================================================
 printRecommendation(RECOMMENDER) - display recommendations for current
 recommender (which is passed in)
 ==========================================================================*/
void Recommend::printRecommendation(RECOMMENDER requester) {
	cout << "RECOMMENDATIONS FOR " << requester << ":" << endl;
	for (const auto& entry : simAvg) {
		if (ratings[requester][getBookIndex(entry.first)] == 0) {
			cout << entry.first << " (" << fixed << setprecision(2) << entry.second << ")" << endl;
		}
	}
}

/*==========================================================================
 string removeCR(string) - remove ending CR from string
 ==========================================================================*/
string Recommend::removeCR(string str) {
	str.erase(remove(str.begin(), str.end(), '\r'), str.end());
	return str;
}

/*==========================================================================
 string strDivider(char, int) - create a string of char of length int
 ==========================================================================*/
string Recommend::strDivider(char ch, int length) {
	return string(length, ch);
}
