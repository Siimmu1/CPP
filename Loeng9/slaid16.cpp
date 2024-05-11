#include <iostream>
#include <vector>

int main() {
	std::vector<int> a{1, 2, 3};

	std::cout << a.size() << ":";
	for (unsigned i = 0; i < a.size(); ++i) {
		std::cout << " " << a[i];
	}
	std::cout << std::endl;

	std::cout << a.size() << ":";
	for (auto & x : a) {
		std::cout << " " << x;
	}
	std::cout << std::endl;

	std::cout << a.size() << ":";
	for (auto i = a.begin(); i != a.end(); ++i) {
		std::cout << " " << *i;
	}
	std::cout << std::endl;

	std::cout << a.size() << ":";
	for (auto i = a.rbegin(); i != a.rend(); ++i) {
		std::cout << " " << *i;
	}
	std::cout << std::endl;
}
