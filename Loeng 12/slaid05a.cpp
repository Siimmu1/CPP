#include <iostream>
#include <string>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	auto i = s.find(t);
	while (i != std::string::npos) {
		s.replace(i, t.length(), u);
		i = s.find(t, i + u.length());
	}
	std::cout << s << std::endl;
}
