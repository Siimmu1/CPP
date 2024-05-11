#include <iostream>
#include <string>
#include <regex>

int main() {
	std::string ss[] = {"ABC", "AABBC", "BBC", "AAC", "AABBCC"};
	std::regex p{"A?B+C?"};
	for (const auto & s : ss) {
		std::smatch m;
		if (std::regex_search(s, m, p)) {
			std::cout << s << ": " << m[0] << std::endl;
		} else {
			std::cout << s << std::endl;
		}
	}
}
