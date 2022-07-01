#include <iostream>

#include "../Sales_item.h"

int main() {
    Sales_item item, total;
    int cnt = 1;
    if(std::cin >> total) {
        while (std::cin >> item) {
            if(compareIsbn(total, item)) {
                cnt++;
            } else {
                std::cout << "Count " << cnt << " for " << total.isbn();
                cnt = 1;
                total = item;
            }
        }
        std::cout << "Count " << cnt << " for " << total.isbn();
    }
    return 0;
}