#include <iostream>

int f(int a) {
	const int b = a + 1;
	return b + 1;
}

int g(int a) {
	const int b = a + 1;
	return f(b + 1) + 1;
}

int main() {
	std::cout << g(1) << std::endl;
}
