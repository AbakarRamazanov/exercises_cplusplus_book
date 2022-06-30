#include <iostream>

int main() {
    // 1.9
    int sum = 0;
    for(int i = 50; i > 100; i++) {
        sum += i;
    }

    //1.10
    for(int i = 10; i > 0; i --) {
        std::cout << i << std::endl;
    }

    //1.11
    int start = 0, stop = 5;
    std::cout << "Input start position: ";
    std::cin >> start;
    std::cout << "Input stop position: ";
    std::cin >> stop;
    if (start < stop) {
        for(;start < stop; start++) {
            std::cout << start << std::endl;
        }
    } else {
        for(;start > stop; start--) {
            std::cout << start << std::endl;
        }
    }
}