#include <iostream>

int main() {
    int a, b;
    std::cout << "Insert two integers:";
    std::cout << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "a * b = ";
    std::cout << a;
    std::cout << " * ";
    std::cout << b;
    std::cout << " = ";
    std::cout << a * b;
    std::cout << std::endl;
    return 0;
}