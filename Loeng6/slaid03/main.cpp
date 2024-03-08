#include <iostream>
#include <vector>
#include <cmath>

#include "dotprod.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<double> p1(n), p2(n), v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> p1[i];
	}
	for (int i = 0; i < n; ++i) {
		std::cin >> p2[i];
	}
	for (int i = 0; i < n; ++i) {
		v[i] = p2[i] - p1[i];
	}
	std::cout << std::sqrt(dotprod(v, v)) << std::endl;
}
