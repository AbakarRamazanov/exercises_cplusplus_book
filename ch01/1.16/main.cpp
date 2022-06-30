#include <iostream>

int main() {
    int sum = 0;
    int n;
    std::cout << "For finish send EOF. Input numbers: ";
    while(std::cin >> n) {
        sum += n;
    }
    std::cout << "sum: " << sum << std::endl;
}