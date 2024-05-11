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
	std::vector<int> a(10); // a[0..9] == 0
	std::cout << a << std::endl;

	std::vector<int> b(10, 1); // b[0..9] == 1
	std::cout << b << std::endl;

	std::vector<int> c{2, 3}; // c[0] == 2, c[1] == 3
	std::cout << c << std::endl;

	std::vector<int> d; // tühi vektor
	std::cout << d << std::endl;

	// a[10] = 1; // määramatus
	// a.at(10) = 1; // garanteeritud veaolukord

	c.pop_back(); // {2}
	std::cout << c << std::endl;
	c.push_back(4); // {2, 4}
	std::cout << c << std::endl;

	b.resize(5); // b[0..4] == 1
	std::cout << b << std::endl;
	b.resize(8); // b[0..4] == 1, b[5..7] == 0
	std::cout << b << std::endl;
}
