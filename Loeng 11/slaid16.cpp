#include <iostream>
#include <string>

int main() {
	std::string s1 = "hello";

	std::string s2 = "hel"; s2 += "lo";
	if (s1 == s2) {
		std::cout << "s1 ja s2 samad" << std::endl;
	}

	const char * s3 = "hello";
	if (s1 == s3) {
		std::cout << "s1 ja s3 samad" << std::endl;
	}

	char s4[] = "hello";
	if (s1 == s4) {
		std::cout << "s1 ja s4 samad" << std::endl;
	}

	auto s5 = "hello"; // const char *

	using namespace std::literals::string_literals;
	auto s6 = "hello"s; // std::string
}
