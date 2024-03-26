#include "Encryption.h"
#include "SimpleEncryption.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
   string inFileName, outFileName;
   cout << "Enter name of file to encrypt: ";
   cin >> inFileName;
   cout << "Enter name of file to receive "
      << "the encrypted text: ";
   cin >> outFileName;
   SimpleEncryption obfuscate(inFileName, outFileName);
   
   //Encryption tmp; // this will not work because Encryption is an abstract class
   
   obfuscate.encrypt();
   return 0;
}
