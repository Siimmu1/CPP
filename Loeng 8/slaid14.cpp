#include <iostream>

int main() {
	int a, b;
	while (std::cin >> a >> b) {
		std::cout << a + b << std::endl;
	}
	if (!std::cin.eof()) {
		std::cerr << "error" << std::endl;
	}
}
