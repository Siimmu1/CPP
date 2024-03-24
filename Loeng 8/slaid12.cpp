#include <iostream>
#include <sstream>
#include <string>

int main() {
	std::string s;
	for (int i = 1; std::getline(std::cin, s); ++i) {
		std::istringstream ss{s};
		for (int n; ss >> n; ) {
			std::cout << "Line " << i << ", got " << n << std::endl;
		}
	}
}
