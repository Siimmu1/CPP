#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
	std::vector<int> a{1, 2, 3};

	for (unsigned i = 0; i < a.size(); ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	for (auto x : a) {
		std::cout << x << " ";
	}
	std::cout << std::endl;

	std::copy(a.begin(), a.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::copy_n(a.begin(), a.size(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	for (unsigned i = 0; i < a.size(); ++i) {
		if (i > 0) std::cout << " ";
		std::cout << a[i];
	}
	std::cout << std::endl;
}
