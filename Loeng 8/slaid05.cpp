#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	std::cout << "Got '" << s << "'" << std::endl;
	std::getline(std::cin, s);
	std::cout << "Got '" << s << "'" << std::endl;
}