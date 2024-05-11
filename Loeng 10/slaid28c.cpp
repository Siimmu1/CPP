#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
	std::vector<int> a{2, 7, 1, 8, 2, 8};

	std::sort(a.begin(), a.end(),
		std::greater<int>());

	for (auto n : a) {
		std::cout << " " << n;
	}
	std::cout << std::endl;
}
