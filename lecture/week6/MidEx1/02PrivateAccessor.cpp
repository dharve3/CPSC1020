class Example {
private:
    int privateVar;
};


int main( ) {
    Example obj;
    obj.privateVar = 10; // This line causes a compilation error, you cannot access the private variable.
    return 0;
}
