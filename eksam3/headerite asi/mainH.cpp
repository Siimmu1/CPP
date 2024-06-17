#include <iostream>
#include "sub.h"

int main() {
    for (int i = 10; i <= 20; i += 5) {
        for (int j = 5; j <= 15; j += 5) {
            std::cout << i << " - " << j << " = " << sub(i, j) << std::endl;
        }
    }
    std::cout << "Count = " << count << std::endl;
}