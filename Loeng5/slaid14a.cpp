#include <iostream>

int f(int a) {
	const int b = a + 1;
	return b + 1;
}

int g(int c) {
	const int d = c + 1;
	return f(d + 1) + 1;
}

int main() {
	std::cout << g(1) << std::endl;
}
