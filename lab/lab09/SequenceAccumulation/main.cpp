#include <vector>
#include <iostream>
#include <string>
#include "accum.h"

int main () {
    // vector to hold integers
    std::vector<int> v;

    //variables to store temp values
    int x;
    std::string temp;

    //adding user input into vector 
    std::cout << "Enter four numbers: ";
    for (int i = 0; i < 4; i++) {
        std::cin >> x;
        v.push_back(x);
    }
    //calling accum function, passing vector v 
    std::cout << "The sum of the numbers is " << accum(v) << std::endl;
    
    //string vector 
    std::vector<std::string> v_string; 
    
    //adding user input into vector 
    std::cout << "Enter four strings: ";
    for (int i = 0; i < 4; i++) {
        std::cin >> temp;
        v_string.push_back(temp);
    }

    //calling accum function, passing v_string vector, specifying string return 
    std::cout << "The sum of the strings is " << accum<std::string>(v_string);

    return 0;
}