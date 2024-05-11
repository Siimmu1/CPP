#include <iostream>
#include <set>

int main() {
	std::set<int> s{1, 3};

	for (auto x : {0, 1, 2, 3, 4}) {
		auto i = s.lower_bound(x);
		auto j = s.upper_bound(x);
		std::cout << x;
		if (i == s.end()) {
			std::cout << " end";
		} else {
			std::cout << " ->" << *i;
		}
		if (j == s.end()) {
			std::cout << " end";
		} else {
			std::cout << " ->" << *j;
		}
		std::cout << std::endl;
	}
}
