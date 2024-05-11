#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (auto & x : a) {
		std::cin >> x;
	}
	std::vector<int> b(n);
	for (auto & x : b) {
		std::cin >> x;
	}

	std::vector<int> d;
	for (auto x : a) {
		bool in = false;
		for (auto y : b) {
			if (x == y) {
				in = true;
			}
		}
		if (!in) {
			d.push_back(x);
		}
	}

	if (d.empty()) {
		std::cout << "pole" << std::endl;
	} else {
		for (auto x : d) {
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}
}
