#include <iostream>
#include <list>

std::ostream & operator<< (std::ostream & os, const std::list<int> & s) {
	os << s.size() << ":";
	for (auto x : s) {
		os << " " << x;
	}
	return os;
}

int main() {
	std::list<int> s{1, 2, 3};
	std::cout << s << std::endl;

	s.pop_back();
	s.push_back(4); // {1, 2, 4}
	std::cout << s << std::endl;

	s.pop_front();
	s.push_front(0); // {0, 2, 4}
	std::cout << s << std::endl;

	auto i = s.begin();
	++i; ++i;
	s.insert(i, 5); // {0, 2, 5, 4}
	std::cout << s << std::endl;

	auto j = s.end();
	--j; --j;
	s.insert(j, 6); // {0, 2, 6, 5, 4}
	std::cout << s << std::endl;
}
