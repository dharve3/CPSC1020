#include "Recommend.h"

bool DEBUG = false;

/*==========================================================================
 bool compareRatings(const pair<string, double>&, const pair<string, couble>&)) - a helper function to compare by rating and then
 book title - used by sort
===========================================================================*/

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

/*==========================================================================
 computeRecommend(RECOMMENDER)
 - find the top 3 similar recommenders
 - find the highest rated books from the top 3 recommenders
 ===========================================================================*/

/*==========================================================================
 computeSimAvg(BOOK_AVG_LIST)
 - takes top 3 most similar names to recommender
 - averages the books that are non 0
 - returns best books in order
===========================================================================*/

/*==========================================================================
 computeBookAverages()
 - compute and store (using bookAverages) the average rating for each book
 from all non 0 ratings
 - sort by highest rating
===========================================================================*/

/*==========================================================================
 computeSimilarities(RECOMMENDER)
 - finds the most similar recommendations to the recommender using dot product
 - sort by highest rating
 ==========================================================================*/

/*==========================================================================
 bool checkRecommender(RECOMMENDER) - given a recommender's name, return
 true if recommender has made ratings, otherwise return false
 ==========================================================================*/

/*==========================================================================
 double getBookAverage(BOOK_TITLE) - return average rating from bookAverages
 for a given book
 ==========================================================================*/

/*==========================================================================
 int getBookCount() - return the number of books
 ==========================================================================*/

/*==========================================================================
 int getRecommenderCount() - return the number of recommenders in ratings
 ==========================================================================*/

/*==========================================================================
 int getBookIndex(BOOK_TITLE) - return the index of a given book title in
 the books vector
 ==========================================================================*/

/*==========================================================================
 double getRecommenderBookRating(RECOMMENDER, BOOK_TITLE)
 - find the position of the title in books vector
 - find the recommender in ratings vector
 - return the recommender's rating for that title
	==========================================================================*/

/*==========================================================================
	printDotProducts(RECOMMENDER) - display dot products for current recommender
 ==========================================================================*/

/*==========================================================================
 string strAverages() - return a string of computeBookAverages
 formatted for display
 ==========================================================================*/

/*==========================================================================
 printAverages() - display the bookAverages using strAverages()
 ==========================================================================*/

/*==========================================================================
 string strRecommendationRatings() - return a string of ratings as read in
 from the file
 ==========================================================================*/

/*==========================================================================
 printRecommendationRatings - display ratings
 ==========================================================================*/

/*==========================================================================
 string strSimilarList() - return a string of similarList
 ==========================================================================*/

/*==========================================================================
 printSimilarList(RECOMMENDER) - display similarList for given recommender
 ==========================================================================*/

/*==========================================================================
 string strSimAvg() - return a string of simAvg
 ==========================================================================*/

/*==========================================================================
 printSimAvg(RECOMMENDER) - display simAvg for given recommender
 ==========================================================================*/

/*==========================================================================
 string strFancyRatings() - return a fancy formatted string of ratings
 ==========================================================================*/

/*==========================================================================
 printFancyRatings() - display a fancy formatted string of ratings
 ==========================================================================*/

/*==========================================================================
 string strRecommendation() - return a string of current recommendations
 ==========================================================================*/

/*==========================================================================
 string strBooks() - return a string of books
 ==========================================================================*/

/*==========================================================================
 printBooks() - display books
 ==========================================================================*/

/*==========================================================================
 string strNames() - return a string of recommender names
 ==========================================================================*/

/*==========================================================================
 printNames() - display recommender names
 ==========================================================================*/

/*==========================================================================
 printRecommendation(RECOMMENDER) - display recommendations for current
 recommender (which is passed in)
 ==========================================================================*/

/*==========================================================================
 string removeCR(string) - remove ending CR from string
 ==========================================================================*/

/*==========================================================================
 string strDivider(char, int) - create a string of char of length int
 ==========================================================================*/
