class Example {
public:
    int var;
};


int main( ) {
    Example obj;
    Example *ptr = &obj;
    ptr->var = 10;

    return 0;
}
