#include <iostream>

void hanoi(int n, char kust, char kuhu, char abi) {
	if (n > 0) {
		hanoi(n - 1, kust, abi, kuhu);
		std::cout << kust << "-->" << kuhu << std::endl;
		hanoi(n - 1, abi, kuhu, kust);
	}
}

int main() {
	int n;
	std::cin >> n;
	hanoi(n, 'A', 'C', 'B');
}
