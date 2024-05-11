#include <iostream>
#include <string>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	for (auto i = s.find(t); i != std::string::npos; i = s.find(t, i + u.length())) {
		s.replace(i, t.length(), u);
	}
	std::cout << s << std::endl;
}
