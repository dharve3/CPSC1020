// This program demonstrates an application
// of pure virtual functions.
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Encryption {
protected:
    ifstream inFile;
    ofstream outFile;
public:
    Encryption(const string& inFileName, const string& outFileName);
    ~Encryption();
    // Pure virtual function
    virtual char transform(char ch) = 0; // made pure virtual to match later declaration
    // Do the actual work.
    virtual void encrypt() final; // made virtual
    void display(const string& fn);
};

//**************************************************
// Constructor opens the input and output file.    *
//**************************************************
Encryption::Encryption(const string& inFileName, const string& outFileName) {
    inFile.open(inFileName);
    outFile.open(outFileName);
    if (!inFile) {
        cout << "The file " << inFileName
             << " cannot be opened.";
        exit(1);
    }
    if (!outFile) {
        cout << "The file " << outFileName
             << " cannot be opened.";
        exit(1);
   }
}

//**************************************************
//Destructor closes files.                         *
//**************************************************
Encryption::~Encryption() {
    inFile.close();
    outFile.close();
}

//*****************************************************
//Encrypt function uses the virtual transform         *
//member function to transform individual characters. *
//*****************************************************
void Encryption::encrypt() {
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail()) {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

//****************************************************
// display contents of encrypted file
//****************************************************
void Encryption::display(const string& fn) {
    char ch;
    inFile.get(ch);
    while (!inFile.fail()) {
        cout << ch;
        inFile.get(ch);
    }
    // moved close statements to the end of the function
    inFile.close();
    outFile.close();
}

// The subclass simply overides the virtual
// transformation function
class SimpleEncryption : public Encryption {
public:
    char transform(char ch) override {
        if (islower(ch)) { // If character is lowercase
            ch = (ch - 'a' + 5) % 26 + 'a'; // Add 5 and wrap around if necessary
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') // If character is a vowel
                ch -= 2; // Subtract 2
            else
                ch += 3; // Otherwise, add 3
        } else if (isupper(ch)) { // If character is uppercase
            ch = (ch - 'A' - 5 + 26) % 26 + 'A'; // Subtract 5 and wrap around if necessary
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') // If character is a vowel
                ch -= 2; // Subtract 2
            else
                ch += 3; // Otherwise, add 3
        } else { // If character is neither uppercase nor lowercase
            ch += 1; // Add 1
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') // If character is a vowel
                ch -= 2; // Subtract 2
            else
                ch += 3; // Otherwise, add 3
        }
        return ch;
    }
    SimpleEncryption(const string& inFileName, const string& outFileName)
        : Encryption(inFileName, outFileName) {}
};

int main() {
    string inFileName, outFileName;
    cout << "Enter name of file to encrypt: ";
    cin >> inFileName;
    cout << "Enter name of file to receive "
        << "the encrypted text: ";
    cin >> outFileName;
    SimpleEncryption obfuscate(inFileName, outFileName);
    obfuscate.encrypt();
    obfuscate.display(inFileName); // Display the encrypted contents of the input file
    return 0;
}