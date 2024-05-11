#include <iostream>
#include <string>
#include <regex>

int main() {
	std::string ss[] = {"ABC", "AABBC", "BBC", "AAC", "AABBCC"};
	std::regex p{"A*B+C?"};
	for (const auto & s : ss) {
		std::cout << s << ": " << std::regex_match(s, p) << std::endl;
	}
}
