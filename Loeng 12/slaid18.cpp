#include <iostream>
#include <string>

int main() {
	for (std::string s : {"120", "1xx"}) {
		std::size_t p;
		int n = std::stoi(s, &p);
		if (p == s.length()) {
			std::cout << s << ": got " << n << std::endl;
		} else {
			std::cout << s << ": got " << n << ", left " << s.substr(p) << std::endl;
		}
	}
}
