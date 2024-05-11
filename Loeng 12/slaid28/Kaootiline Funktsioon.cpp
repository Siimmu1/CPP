#include <iostream>
#include "kaos.h"
#include <stdexcept>

int main() {
    int n;
    std::cin >> n;

    try {
        auto tulem = f(n);
        if (std::holds_alternative<int>(tulem)) {
            std::cout << "int: " << std::get<int>(tulem) << std::endl;
        } else if (std::holds_alternative<double>(tulem)) {
            std::cout << "double: " << std::get<double>(tulem) << std::endl;
        } else if (std::holds_alternative<std::string>(tulem)) {
            std::cout << "string: " << std::get<std::string>(tulem) << std::endl;
        }
    } catch (const std::logic_error& e) {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    return 0;
}
