#include <iostream>
#include <vector>

std::ostream & operator<< (std::ostream & os, const std::vector<int> & v) {
	os << v.size() << ":";
	for (auto x : v) {
		os << " " << x;
	}
	return os;
}

int main() {
	int n;
	std::cin >> n;

	std::vector<int> a;
	for (int i = 0; i < n; ++i) {
		int x;
		std::cin >> x;
		a.push_back(x);
	}

	std::vector<int> b(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> b[i];
	}

	std::vector<int> c(n);
	for (auto & x : c) {
		std::cin >> x;
	}

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
