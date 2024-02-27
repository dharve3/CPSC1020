// This program demonstrates the ability of a pointer to
// point to different variables.
#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;        // Three int variables
    int *ptr;                          // Pointer variable

   // Display the contents of x, y, and z.
    cout << "Here are the values of x, y, and z:\n";
    cout << x << "  " << y << "  " << z << endl; // directly displaying

   // Use the pointer to manipulate x, y, and z

    ptr = &x;         // Store the address of x in ptr // Added &
    *ptr *= 2;        // Multiply value in x by 2 // Added * before ptr

    ptr = &y;         // Store the address of y in ptr
    *ptr *= 2;        // Multiply value in y by 2 // Added * before ptr

    ptr = &z;         // Store the address of z in ptr
    *ptr *= 2;        // Multiply value in z by 2 // Added * before ptr

    // Display the contents of x, y, and z
    cout << "Once again, here are the values "
         << "of x, y, and z:\n";
    cout << x << "  " << y << "  " << z << endl; // directly displaying
    return 0;
}