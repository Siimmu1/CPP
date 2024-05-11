#include <iostream>
#include <string>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	std::string::size_type i = s.find(t), j = 0;
	while (i != std::string::npos) {
		std::cout << s.substr(j, i - j);
		std::cout << u;
		j = i + t.length();
		i = s.find(t, j);
	}
	std::cout << s.substr(j) << std::endl;
}
