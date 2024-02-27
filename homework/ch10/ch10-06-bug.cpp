// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib>   // For rand and srand
#include <ctime>     // For the time function
using namespace std;

// Function prototype
int *getRandomNumbers(int); // updated prototype to match ptr type

int main()
{
   int* numbers = nullptr;  // To point to the numbers

   // Get an array of five random numbers
   numbers = getRandomNumbers(5);

   // Display the numbers
   for (int count = 0; count < 5; count++)
      cout << numbers[count] << endl;

   // Free the memory
   delete [] numbers;
   numbers = nullptr;
   return 0;
}

//**************************************************
// The getRandomNumbers function returns a pointer *
// to an array of random integers. The parameter   *
// indicates the number of numbers requested.      *
//**************************************************

int *getRandomNumbers(int size) // ptr type
{
   int* array = nullptr;    // Array to hold the numbers // ptr type int

   // Return nullptr if size is zero or negative
   if (size <= 0)
      return nullptr;

   // Dynamically allocate the array
   array = new int[size];

   // Seed the random number generator by passing
   // 0 for testing purposes so that same random numbers are generated
   srand(0);

   // Populate the array with random numbers
   for (int count = 0; count < size; count++)
      array[count] = rand();

   // Return a pointer to the array
   return array;
}