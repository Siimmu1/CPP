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
	std::vector<int> a{1, 2, 3};
	std::cout << a << std::endl;
	a.erase(a.begin() + 1); // {1, 3}
	std::cout << a << std::endl;
	a.insert(a.begin() + 1, 4); // {1, 4, 3}
	std::cout << a << std::endl;

	std::vector<int> b{5, 6};
	std::cout << b << std::endl;
	b.insert(b.begin() + 1, a.begin(), a.end()); // {5, 1, 4, 3, 6}
	std::cout << b << std::endl;
	b.erase(b.begin() + 2, b.end() - 1); // {5, 1, 6}
	std::cout << b << std::endl;
}
