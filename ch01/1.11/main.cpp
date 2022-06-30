#include <iostream>

int main() {
    int start = 0, stop = 5;
    std::cout << "Input start position: ";
    std::cin >> start;
    std::cout << "Input stop position: ";
    std::cin >> stop;
    if (start < stop) {
        while(start < stop) {
            std::cout << start << std::endl;
            start++;
        }
    } else {
        while(start > stop) {
            std::cout << start << std::endl;
            start--;
        }
    }
}