#include <iostream>

int main() {
	auto c = 'h';
	std::cout << c << " " << int(c) << std::endl;
	++c;
	std::cout << c << " " << int(c) << std::endl;
}
