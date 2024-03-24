#include <iostream>
#include <string>
#include <limits>

int main() {
	int n;
	std::cin >> n;
	std::cout << "Got " << n << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::string s;
	std::getline(std::cin, s);
	std::cout << "Got '" << s << "'" << std::endl;
}
