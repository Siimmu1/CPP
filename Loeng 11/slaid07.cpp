#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	std::copy_n(std::istream_iterator<int>(std::cin), n, a.begin());
	std::copy_n(std::istream_iterator<int>(std::cin), n, b.begin());

	std::vector<int> d;
	for (auto x : a) {
		if (std::find(b.begin(), b.end(), x) == b.end()) {
			d.push_back(x);
		}
	}

	if (d.empty()) {
		std::cout << "pole" << std::endl;
	} else {
		std::copy(d.begin(), d.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
	}
}
