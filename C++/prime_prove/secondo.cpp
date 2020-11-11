# include <iostream>

int main() {
    char c='c';
    char* a=&c;

    std::cout << *a << std::endl;
    std::cout << c << std::endl;

    float v[3]; // un array di tre float
    char* s[31]; // un array di trentuno puntatori a carattere

    v[0]=0.2;
    std::cout << v[0] << std::endl;
}
