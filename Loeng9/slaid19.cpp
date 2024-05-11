#include <iostream>
#include <deque>

std::ostream & operator<< (std::ostream & os, const std::deque<int> & q) {
	os << q.size() << ":";
	for (auto x : q) {
		os << " " << x;
	}
	return os;
}

int main() {
	std::deque<int> q{1, 2, 3};
	std::cout << q << std::endl;

	q.pop_back(); // {1, 2}
	std::cout << q << std::endl;
	q.push_back(4); // {1, 2, 4}
	std::cout << q << std::endl;

	q.pop_front(); // {2, 4}
	std::cout << q << std::endl;
	q.push_front(0); // {0, 2, 4}
	std::cout << q << std::endl;
}
