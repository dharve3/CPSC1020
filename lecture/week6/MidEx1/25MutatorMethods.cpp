class Example {
private:
    int var;

public:
    void setVar(int value) {
        var = value;
    }
};


int main( ) {
    Example obj;
    obj.setVar(10);
    return 0;
}
