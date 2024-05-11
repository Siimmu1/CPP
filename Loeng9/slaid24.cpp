#include <iostream>
#include <set>

std::ostream & operator<< (std::ostream & os, const std::set<int> & s) {
	os << s.size() << ":";
	for (auto x : s) {
		os << " " << x;
	}
	return os;
}

int main() {
	std::set<int> s{1, 3, 3, 2, 4};
	std::cout << s << std::endl; // {1, 2, 3, 4}

	s.erase(4);
	std::cout << s << std::endl; // {1, 2, 3}

	auto i = s.find(2);
	if (i != s.end()) s.erase(i);
	std::cout << s << std::endl; // {1, 3}

	s.insert(5);
	std::cout << s << std::endl; // {1, 3, 5}
	s.insert({2, 3, 4});
	std::cout << s << std::endl; // {1, 2, 3, 4, 5}

	for (auto i = s.begin(); i != s.end(); ) {
		if (*i % 2 > 0) {
			i = s.erase(i);
		} else {
			++i;
		}
	}
	std::cout << s << std::endl; // {2, 4}
}
