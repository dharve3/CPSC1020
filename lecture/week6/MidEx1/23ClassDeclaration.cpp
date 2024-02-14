#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example {
private:
    int privateVar;

public:
    Example(); // Constructor declaration
    ~Example(); // Destructor declaration
    void setPrivateVar(int value); // Method declaration
    int getPrivateVar() const; // Method declaration (const member function)
};

#endif

// Example class declartion with private var, constructor, destructor, and getter/setter methods