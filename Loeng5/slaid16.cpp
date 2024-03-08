#include <iostream>

int fibonacci_r(int n) {
	if (n <= 1) {
		return n;
	} else {
		return fibonacci_r(n - 1) + fibonacci_r(n - 2);
	}
}

int fibonacci_i(int n) {
	int f0 = 0, f1 = 1;
	while (n > 0) {
		int f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
		n -= 1;
	}
	return f0;
}

int main() {
	for (int n = 0; n <= 40; ++n) {
		std::cout << n << std::endl;
		std::cout << "r --> " << fibonacci_r(n) << std::endl;
		std::cout << "i --> " << fibonacci_i(n) << std::endl;
	}
}
