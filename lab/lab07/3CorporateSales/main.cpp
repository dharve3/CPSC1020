// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: main.cpp
// Desc: 

#include <iostream>
#include <vector>
#include "DivSales.h"

int main() {
	int i, j;
	std::vector<DivSales> divisions(4);

	for (i = 0; i < 4; ++i) {
		std::cout << "Enter sales data for Division " << i + 1 << std::endl;
		double sales[4];
		for (j = 0; j < 4; ++j) {
			do {
				std::cout << "Quarter " << j + 1 << ": ";
				std::cin >> sales[j];
				if (sales[j] < 0)
					std::cout << "Please enter 0 or greater." << std::endl;
			} while (sales[j] < 0);
		}
		divisions[i].setSales(sales);
	}

    for (i = 0; i < 4; ++i) {
        std::cout << "Total Sales for Division " << i + 1 << ": $" << divisions[i].getDivSales() << std::endl;
    }

    std::cout << "Total Corporate Sales: $" << DivSales::getCorpSales() << std::endl;

    return 0;
}