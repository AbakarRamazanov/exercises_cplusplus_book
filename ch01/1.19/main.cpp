#include <iostream>

int main() {
    int start = 0, stop = 5;
    std::cout << "Input start position: ";
    std::cin >> start;
    std::cout << "Input stop position: ";
    std::cin >> stop;
    int i = 0;
    if (start > stop) {
        i = start;
        start = stop;
        stop = i;
    }
    for (i = start; i < stop; i++) {
        std::cout << i << std::endl;
    }
}