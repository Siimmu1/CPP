#include <iostream>

struct test {
	test() {
		std::cout << "constructed" << std::endl;
	}
	~test() {
		std::cout << "destructed" << std::endl;
	}
};

int main() {
	for (int i = 0; i < 5; ++i) {
		test t;
	}
}
