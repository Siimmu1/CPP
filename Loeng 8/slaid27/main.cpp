#include <iostream>
#include <string>

#include "repeat.h"

int main() {
	std::string s;
	int n;
	std::getline(std::cin, s);
	std::cin >> n;
	std::cout << s * n << std::endl;
}
