#include <iostream>

#include "../Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cout << "Input data first book: ";
    std::cin >> item1;
    std::cout << "Input data second book: ";
    std::cin >> item2;
    if (compareIsbn(item1, item2)) {
        std::cout << item1 + item2 << std::endl;
    } else {
        std::cout << "Isbn different" << std::endl;
    }
    return 0;
}