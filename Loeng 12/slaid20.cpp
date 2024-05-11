#include <iostream>
#include <stdexcept>

// märkus: see pole kuigi efektiivne viis ruutjuurt arvutada
int sqrt(int n) {
	if (n < 0) {
		throw std::domain_error("negative argument to sqrt()");
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
		try {
			print_sqrt(t);
		} catch (const std::exception & x) {
			std::cout << x.what() << std::endl;
		}
	}
}
