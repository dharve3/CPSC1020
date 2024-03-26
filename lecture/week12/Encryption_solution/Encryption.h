#ifndef ENCRYPTION_H_
#define ENCRYPTION_H_

#include <iostream>
#include <fstream>
#include <string>

class Encryption
{
private:
  std::ifstream inFile;
  std::ofstream outFile;
public:
   Encryption(const std::string& inFileName, const std::string& outFileName);
   ~Encryption();

   // Function that calls specialized transform
   // function to perform the encryption.
   virtual void encrypt() final;

   // Pure virtual function that will 
   // be implemented in each subclass
   virtual char transform(char ch) const = 0;
  
};

#endif
