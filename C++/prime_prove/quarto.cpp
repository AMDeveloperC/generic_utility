# include <iostream>
# include <vector>
# include <deque>
# include <forward_list>
# include <list>
# include <map>
# include <unordered_map>
# include <unordered_set>
# include <queue>
# include <stack>
# include <array>
# include <bitset>

class A {
    public: 
        A() {}
        virtual void metodo() = 0;
        virtual void met() {}

} // end class A

class B : public A {
    public B() {} 

    void metodo() override {
        // ISTRUZIONI
        return;
    }

    void met() override {
        return;
    }
} // end class B

/*
int main() {
    int number;
    std::cout << "Insert number: " << std::endl;
    std::cin >> number;

    int vNumbers[number*10]; // dichiarazione statica
    int* pNumbers = new int[number*10];
    delete[] pNumbers;
    pNumbers = nullptr;

    return 0;
}*/
