// sizeof.cpp
// Size of respective data types

#include <iostream>

using namespace std;

int main( ) {
    cout << sizeof(char) << endl; // 1
    cout << sizeof(int) << endl; // 4, 32-bit integer, signed, -2,147,483,648 to 2,147,483,647
    cout << sizeof(unsigned int) << endl; // 4, 32-bit int, unsigned, 0 to 4,294,967,295
    cout << sizeof(float) << endl; // 4, 32-bit floating point, -3.4028235E+38 to -1.1754944E-38, 0.0E+0, +1.1754944E-38 to +3.4028235E+38
    // cout << sizeof(unsigned float) << endl; // Not Valid
    cout << sizeof(double) << endl; // 8, 64-bit floating point, -1.797693134862315E+308 to -2.225073858507201E-308, 0.0E+0, +2.225073858507201E-308 to +1.797693134862315E+308
    // cout << sizeof(unsigned double) << endl; // Not Valid
    cout << endl;

    cout << sizeof(long int) << endl; // 4, 32-bit integer, signed, -2,147,483,648 to 2,147,483,647 ** - why same as int??
    cout << sizeof(long long int) << endl; // 8, 64-bit integer, signed, -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    cout << sizeof(unsigned long long int) << endl; // 8, 64-bit integer, unsigned, 0 to 18,446,744,073,709,551,615
    cout << sizeof(long double) << endl; // 16, 128-bit floating point, 
    // cout << sizeof(long long double) << endl; // Not Valid
    // cout << sizeof(unsigned long long double) << endl; // Not Valid

    // Note that floating point numbers, and decimal precision is tied to the processor
	return 0;
}
