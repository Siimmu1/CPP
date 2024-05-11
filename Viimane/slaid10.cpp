#include <iostream>
#include <cassert>

double divide(double a, double b) {
	assert(b != 0);
	return a / b;
}

int main() {
	std::cout << divide(4, 2) << std::endl; // OK
	std::cout << divide(1, 0) << std::endl; // lõpetab veaga
	std::cout << divide(8, 2) << std::endl; // siia ei jõua kunagi
}
