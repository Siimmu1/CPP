#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;
	std::cout << "Got " << n << std::endl;
	std::cin >> std::ws;
	std::string s;
	std::getline(std::cin, s);
	std::cout << "Got '" << s << "'" << std::endl;
}
