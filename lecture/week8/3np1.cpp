// here are the required function signatures
// Gradescope will not work without them all included

#include <vector>

using namespace std;

// isOdd
// Returns true if value is even, returns false otheriwise 
bool isOdd(int n) {
    if (n % 2 == 1) {
        return true; // == 1
    } else {
        return false; // == 0
    }
}

// len3nplus1
// Returns the number of elements in the 3n+1 sequence of n
int len3nplus1(int value) {
    vector<int> sequence;
    int current = value;
    int count = 0;

    sequence.emplace_back(value);

    // While the current value of the seqeuence != 1, continute the sequence
    while (current != 1) {
        if (isOdd(current)) {
            current = (current * 3) + 1; // If odd, triple and add 1
        } else {
            current = (current / 2); // If even, divide by 2
        }
        sequence.emplace_back(current); // Add the current value of the sequence
    }

    count = sequence.size();

    return count;
}

// seumSeq3nPlus1
// Returns the sum of the 3n+1 sequence
int sumSeq3nPlus1(int value) {
    vector<int> sequence;
    int current = value;
    int sum = 0;

    sequence.emplace_back(value);

    // While the current value of the seqeuence != 1, continute the sequence
    while (current != 1) {
        if (isOdd(current)) {
            current = (current * 3) + 1; // If odd, triple and add 1
        } else {
            current = (current / 2); // If even, divide by 2
        }
        sequence.emplace_back(current); // Add the current value of the sequence
    }

    // Range based for loop to get sum
    for (int& n : sequence) {
        sum += n;
    }

    return sum;
}

// longestSequence
// returns the number in the range from 1 to max that has the longest 3n+1 sequence
// if there is more than 1, return the first one. 
int longestSequence(int max) {

}