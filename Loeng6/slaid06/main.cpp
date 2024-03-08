#include <iostream>
#include <vector>

#include "stddev.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<double> v(n);
	for (auto & x : v) {
		std::cin >> x;
	}
	std::cout << stddev(v) << std::endl;
}
