#include <iostream>
#include <cstdlib>

// märkus: see pole kuigi efektiivne viis ruutjuurt arvutada
int sqrt(int n) {
	if (n < 0) {
		std::cerr << "negative argument to sqrt()" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	int x = 0;
	while (x * x <= n) {
		++x;
	}
	return x - 1;
}

void print_sqrt(int n) {
	std::cout << n << " -> " << sqrt(n) << std::endl;
}

int main() {
	for (auto t : {1, -3, 5}) {
		print_sqrt(t);
	}
	return EXIT_SUCCESS;
}
