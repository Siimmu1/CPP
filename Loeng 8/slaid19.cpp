#include <iostream>

int main(int argc, const char * const argv[]) {
	std::cout << argc << std::endl;
	for (int i = 0; i < argc; ++i) {
		std::cout << argv[i] << std::endl;
	}
}