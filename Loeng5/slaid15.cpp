#include <iostream>

int factorial(int n) {
	if (n == 0) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

int main() {
	for (int n = 0; n <= 10; ++n) {
		std::cout << n << " --> " << factorial(n) << std::endl;
	}
}
