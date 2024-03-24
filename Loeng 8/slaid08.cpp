#include <iostream>
#include <string>

int main() {
	int n;
	while (std::cin >> n) {
		std::cout << "OK, got " << n << std::endl;
	}
	if (!std::cin.eof()) {
		std::cin.clear();
		std::string s;
		std::cin >> s;
		std::cout << "Expected integer, got '" << s << "'" << std::endl;
	}
}
