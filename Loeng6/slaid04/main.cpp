#include <iostream>
#include <vector>
#include <cmath>

#include "dotprod.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<double> p1(n), p2(n);
	for (auto & x : p1) {
		std::cin >> x;
	}
	for (auto & x : p2) {
		std::cin >> x;
	}
	const auto d11 = dotprod(p1, p1);
	const auto d22 = dotprod(p2, p2);
	const auto d12 = dotprod(p1, p2);
	std::cout << std::sqrt(d11 + d22 - 2 * d12) << std::endl;
}
