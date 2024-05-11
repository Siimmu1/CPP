#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	auto out = std::ostream_iterator<char>(std::cout);
	std::string::size_type i = s.find(t), j = 0;
	while (i != std::string::npos) {
		std::copy(s.begin() + j, s.begin() + i, out);
		std::copy(u.begin(), u.end(), out);
		j = i + t.length();
		i = s.find(t, j);
	}
	std::copy(s.begin() + j, s.end(), out);
	std::cout << std::endl;
}
