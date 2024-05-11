#include <iostream>
#include <set>

int main() {
	std::set<int> s{1, 3, 3, 2};

	std::cout << s.size() << ":";
	for (auto x : s) {
		std::cout << " " << x;
	}
	std::cout << std::endl;

	std::cout << s.size() << ":";
	for (auto i = s.begin(); i != s.end(); ++i) {
		std::cout << " " << *i;
	}
	std::cout << std::endl;

	std::cout << s.size() << ":";
	for (auto i = s.rbegin(); i != s.rend(); ++i) {
		std::cout << " " << *i;
	}
	std::cout << std::endl;
}
