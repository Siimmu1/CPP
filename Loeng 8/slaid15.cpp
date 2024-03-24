#include <iostream>
#include <fstream>

int main() {
	std::ifstream sis{"input.txt"};
	std::ofstream val{"output.txt"};
	int a, b;
	while (sis >> a >> b) {
		val << a + b << std::endl;
	}
	if (!sis.eof()) {
		std::cerr << "error" << std::endl;
	}
}
