#include <iostream>
#include <unordered_set>

std::ostream & operator<< (std::ostream & os, const std::unordered_set<int> & s) {
	os << s.size() << ":";
	for (auto x : s) {
		os << " " << x;
	}
	return os;
}

std::ostream & operator<< (std::ostream & os, const std::unordered_multiset<int> & s) {
	os << s.size() << ":";
	for (auto x : s) {
		os << " " << x;
	}
	return os;
}

int main() {
	std::unordered_set<int> s = {1, 3, 3, 2};
	std::cout << s << std::endl;

	std::unordered_multiset<int> t = {1, 3, 3, 2};
	std::cout << t << std::endl;
}
