#include <iostream>
#include <string>

int main() {
	int n;
	if (std::cin >> n) {
		std::cout << "OK, got " << n << std::endl;
	} else {
		std::cin.clear();
		std::string s;
		std::cin >> s;
		std::cout << "Expected integer, got '" << s << "'" << std::endl;
	}
}
