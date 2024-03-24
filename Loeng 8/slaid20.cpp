#include <iostream>
#include <fstream>

int main(int argc, const char * const argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " file" << std::endl;
		return 1;
	}
	std::ifstream sis{argv[1]};
	if (!sis) {
		std::cerr << "Could not open file" << std::endl;
		return 2;
	}
	int a, b;
	sis >> a >> b;
	if (!sis) {
		std::cerr << "Could not read file" << std::endl;
		return 3;
	}
	std::cout << a + b << std::endl;
	return 0;
}
