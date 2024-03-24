#include <iostream>

int min(int a, int b) {
	return a < b ? a : b;
}

double min(double a, double b) {
	return a < b ? a : b;
}

template<typename T>
T max(T a, T b) {
	return a > b ? a : b;
}

int main() {
	std::cout << min(1, 2) << std::endl;
	std::cout << min(1.0, 2.0) << std::endl;
	//std::cout << min(1, 2.0) << std::endl; // viga
	std::cout << min(double(1), 2.0) << std::endl;

	std::cout << max(1, 2) << std::endl;
	std::cout << max(1.0, 2.0) << std::endl;
	//std::cout << max(1, 2.0) << std::endl; // viga
	std::cout << max(double(1), 2.0) << std::endl;
	std::cout << max<double>(1, 2.0) << std::endl;
}
