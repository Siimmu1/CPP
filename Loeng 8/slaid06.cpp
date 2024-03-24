#include <iostream>

int main() {
	int n;
	std::cin >> n;
	if (std::cin) {
		std::cout << "OK1, got " << n << std::endl;
	}
	while (std::cin >> n) {
		std::cout << "OK2, got " << n << std::endl;
	}
}
