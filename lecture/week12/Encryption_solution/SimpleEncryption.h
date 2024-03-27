#ifndef SIMPLE_ENCRYPTION_H_
#define SIMPLE_ENCRYPTION_H_

#include "Encryption.h"
#include <iostream>
#include <fstream>
#include <string>

class SimpleEncryption : public Encryption 
{
public:
  char transform(char ch) const override;
  SimpleEncryption(const std::string& inFileName, const std::string& outFileName)
      : Encryption(inFileName, outFileName)
   {
   }
};

#endif
