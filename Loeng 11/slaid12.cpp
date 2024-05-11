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

	if (a == b) {
		std::cout << "pole" << std::endl;
	} else {
		auto ib = b.begin();
		for (auto x : a) {
			while (ib != b.end() and *ib < x) ++ib;
			if (ib == b.end() or *ib > x) {
				std::cout << x << " ";
			}
		}
		std::cout << std::endl;
	}
}
