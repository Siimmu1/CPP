#include <iostream>
#include <cmath>

double series(double r1, double r2) {
	return r1 + r2;
}

double parallel(double r1, double r2) {
	return std::pow(std::pow(r1, -1) + std::pow(r2, -1), -1);
}

int main() {
	double r1, r2;
	std::cin >> r1 >> r2;
	std::cout << series(r1, r2) << " " << parallel(r1, r2) << std::endl;
}
