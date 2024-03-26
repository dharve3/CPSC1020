#include "Encryption.h"

//**************************************************
// Constructor opens the input and output file.    *
//**************************************************
Encryption::Encryption(const std::string& inFileName, const std::string& outFileName)
{
   inFile.open(inFileName);
   outFile.open(outFileName);
   if (!inFile)
   {
     std::cout << "The file " << inFileName
         << " cannot be opened.";
      exit(1);
   }
   if (!outFile)
   {
      std::cout << "The file " << outFileName
         << " cannot be opened.";
      exit(1);
   }
}

//**************************************************
//Destructor closes files.                         *
//**************************************************
Encryption::~Encryption()
{
   inFile.close();
   outFile.close();
}

//*****************************************************
//Encrypt function uses the virtual transform         *
//member function to transform individual characters. *
//***************************************************** 

// a better solution with fewer lines of code
void Encryption::encrypt()
{
   char ch;
   char transCh;
   while (inFile.get(ch)) // run loop as long as character can be read from inFile
   {
      transCh = transform(ch);
      outFile.put(transCh);
   }
}

// // solution discussed in class
// void Encryption::encrypt()
// {
//    char ch;
//    char transCh;
//    inFile.get(ch);
//    while (!inFile.fail())
//    {
//       transCh = transform(ch);
//       outFile.put(transCh);
//       inFile.get(ch);
//    }
// }
