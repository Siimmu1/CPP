#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int samme = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		} else {
			n = 3 * n + 1;
		}
		samme += 1;
	}
	std::cout << samme << std::endl;
}
