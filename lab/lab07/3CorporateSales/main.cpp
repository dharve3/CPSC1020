// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: main.cpp
// Desc: Takes input for 4 divisons of corporate sales, summarizes, totals, and displays output

#include <iostream>
#include <iomanip>
#include <vector>
#include "DivSales.h"

int main() {
	int i, j;
	std::vector<DivSales> divisions(4);


	// Get input for each divison
	for (i = 0; i < 4; ++i) {
		std::cout << "Enter sales data for Division " << i + 1 << std::endl;
		double sales[4];
		// Get input for each quarter
		for (j = 0; j < 4; ++j) {
			std::cout << "Quarter " << j + 1 << ": ";
			do {
				std::cin >> sales[j];
				if (sales[j] < 0)
					std::cout << "Please enter 0 or greater: ";
			} while (sales[j] < 0);
		}
		// Set sales with each divison's data
		divisions[i].setSales(sales[0], sales[1], sales[2], sales[3]);
	}

	// Display total sales for each divison
    for (i = 0; i < 4; ++i) {
        std::cout << "Total Sales for Division " << std::fixed << std::setprecision(2) << i + 1 << ": $" << divisions[i].getDivSales() << std::endl;
    }

	// Display total corporate sales (each divison combined)
    std::cout << "Total Corporate Sales: $" << std::fixed << std::setprecision(2) << DivSales::getCorpSales() << std::endl;

    return 0;
}