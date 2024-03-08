#include <iostream>

int f() { } // määramatus

void print_if_even(int a) {
	if (a % 2 != 0) {
		return; // varane väljumine
	}
	std::cout << a << std::endl;
}

int main() {
	std::cout << f() << std::endl;
	print_if_even(5);
	print_if_even(10);
}
