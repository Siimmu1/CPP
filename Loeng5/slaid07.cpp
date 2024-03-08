#include <iostream>

int ruut(int n) {
	return n * n;
}

int main() {
	std::cout << ruut(4) << std::endl;
	std::cout << ruut(2 + 3) << std::endl;
	const int a = 7;
	std::cout << ruut(a) << std::endl;
}
