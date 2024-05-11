#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

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
	std::copy_n(std::istream_iterator<int>(std::cin), n,
		std::back_inserter(a));

	std::vector<int> b(n);
	std::copy_n(std::istream_iterator<int>(std::cin), n,
		b.begin());

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
