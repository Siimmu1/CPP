#include <iostream>
#include <set>

std::ostream & operator<< (std::ostream & os, const std::multiset<int> & s) {
	os << s.size() << ":";
	for (auto x : s) {
		os << " " << x;
	}
	return os;
}

int main() {
	std::multiset<int> s{1, 3, 3, 2, 4, 4};
	std::cout << s << std::endl;

	s.erase(4);
	std::cout << s << std::endl;

	auto i = s.find(3);
	if (i != s.end()) s.erase(i);
	std::cout << s << std::endl;
}
