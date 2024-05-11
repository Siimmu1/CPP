#include <iostream>
#include <string>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	for (unsigned i = 0; i < s.length(); ) {
		bool match = true;
		for (unsigned j = 0; j < t.length(); ++j) {
			if (i + j >= s.length() or s[i + j] != t[j]) {
				match = false;
				break;
			}
		}
		if (match) {
			s.replace(i, t.length(), u);
			i += u.length();
		} else {
			i += 1;
		}
	}
	std::cout << s << std::endl;
}
