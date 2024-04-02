#include <iostream>
#include <string>
#include <vector> 

// int vector 
template <typename T>
T accum(std::vector<T> v) {
    // using T() to intialize 
    T sum = T();
    // adding all values
    for (const auto& x : v) {
        sum += x;
    }
    return sum;
}

// string vector
template <typename T>
T accum(std::vector<std::string> v) {
    // using T() to initalize 
    T result = T();
    for (size_t i = 0; i < v.size(); i++) {
        result += v[i];
        // adds comma between elements
        if (i != v.size() - 1) {
                result += ", ";
        }
    }
    return result;
}