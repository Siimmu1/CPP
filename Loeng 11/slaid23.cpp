#include <iostream>
#include <string>
#include <regex>

int main() {
	std::string s = "AAABBBCCC";
	std::regex p{"(A?)(B+)(C?)"};
	std::smatch m;
	std::regex_search(s, m, p);
	std::cout << m.prefix() << std::endl;
	for (unsigned i = 0; i < m.size(); ++i) {
		std::cout << i << ": " << m[i] << std::endl;
	}
	std::cout << m.suffix() << std::endl;
}
