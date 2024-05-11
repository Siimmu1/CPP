#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{2, 7, 1, 8, 2, 8};

	const auto i1 = std::adjacent_find(a.begin(), a.end());
	if (i1 == a.end()) {
		std::cout << "Pole korduvaid" << std::endl;
	} else {
		std::cout << "Esimene korduv on " << *i1 << std::endl;
	}

	std::sort(a.begin(), a.end());

	const auto i2 = std::adjacent_find(a.begin(), a.end());
	if (i2 == a.end()) {
		std::cout << "Pole korduvaid" << std::endl;
	} else {
		std::cout << "Esimene korduv on " << *i2 << std::endl;
	}
}
