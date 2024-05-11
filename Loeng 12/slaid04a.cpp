#include <iostream>
#include <string>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	for (unsigned i = 0; i < s.length(); ) {
		if (s.substr(i, t.length()) == t) {
			s.replace(i, t.length(), u);
			i += u.length();
		} else {
			i += 1;
		}
	}
	std::cout << s << std::endl;
}
