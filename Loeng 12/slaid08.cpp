// C++20

#include <iostream>
#include <string>
#include <string_view>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	std::string::size_type i = s.find(t), j = 0;
	while (i != std::string::npos) {
		std::cout << std::string_view(s.begin() + j, s.begin() + i);
		std::cout << u;
		j = i + t.length();
		i = s.find(t, j);
	}
	std::cout << std::string_view(s.begin() + j, s.end()) << std::endl;
}
