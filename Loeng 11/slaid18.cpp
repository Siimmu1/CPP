#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string s = "abrakadabra";
	auto i = std::find(s.begin(), s.end(), 'd');
	std::cout << (i - s.begin()) << std::endl; // 6
	std::cout << s.find("br") << std::endl; // 1
	std::cout << s.find("br", 3) << std::endl; // 8
	std::cout << s.rfind("br") << std::endl; // 8
	if (s.find("gr") == std::string::npos) {
		std::cout << "pole" << std::endl;
	}
	std::cout << s.find_first_of("gkr") << std::endl; // 2
	std::cout << s.find_last_of("gkr") << std::endl; // 9
	std::cout << s.find_first_not_of("abr") << std::endl; // 4
	std::cout << s.find_last_not_of("abr") << std::endl; // 6
}
