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

	if (a == b) {
		std::cout << "pole" << std::endl;
	} else {
		std::copy_if(a.begin(), a.end(),
			std::ostream_iterator<int>(std::cout, " "),
			[&b](int x) {
				return !std::binary_search(b.begin(), b.end(), x);
			}
		);
		std::cout << std::endl;
	}
}
