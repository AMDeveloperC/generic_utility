#include <iostream>

class Foo {
    public:
           Foo() {};
           ~Foo() {};
           
           int getFoo() { return 1; }
    
    private:
           int get2Foo() { return 2; }
};

class CC : private Foo {
    public:
        CC() {}
        ~CC() {}

        int getCC() { return getFoo(); }
};


int main(void) {
    CC c();
    std::cout << c.getCC() << std::endl;
    return 0;
}
