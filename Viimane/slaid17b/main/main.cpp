#include <iostream>
#include "mathlib.h"

int main() {
	int a, b;
	char c;
	std::cin >> a >> c >> b;
	switch (c) {
		case '+':
			std::cout << add(a, b) << std::endl;
			break;
		case '/':
			std::cout << divide(a, b) << std::endl;
			break;
		default:
			std::cout << "Tundmatu tehe " << c << std::endl;
	}
}
