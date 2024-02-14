class Example {
private:
    int var;

public:
    int getVar() {
        return var;
    }
};


int main( ) {
    Example obj;
    int value = obj.getVar();
    return 0;
}
