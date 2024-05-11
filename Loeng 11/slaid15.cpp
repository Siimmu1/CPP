#include <iostream>
#include <cstring>

int main() {
	auto s1 = "hello";
	std::cout << s1 << std::endl;

	const char * s2 = "hello";
	std::cout << s2 << std::endl;
	++s2;
	std::cout << s2 << std::endl;

	char s3[] = "hello";
	char s4[10];
	std::cin >> s4; // ohtlik
	std::cout << s4 << std::endl;

	std::strcpy(s4, "hel"); // ettevaatust
	std::strcat(s4, "lo"); // ettevaatust
	std::cout << s4 << std::endl;
	if (s3 == s4) {
		std::cout << "== samad" << std::endl;
	} else {
		std::cout << "== erinevad" << std::endl;
	}
	if (std::strcmp(s3, s4) == 0) {
		std::cout << "strcmp samad" << std::endl;
	} else {
		std::cout << "strcmp erinevad" << std::endl;
	}
}
