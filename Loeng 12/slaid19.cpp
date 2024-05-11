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

int main() {
	for (auto t : {1, -3, 5}) {
		try {
			std::cout << t << " -> " << sqrt(t) << std::endl;
		} catch (const std::exception & x) {
			std::cout << x.what() << std::endl;
		}
	}
}
