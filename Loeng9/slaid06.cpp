#include <iostream>
#include <iomanip>

int main() {
	int n, m;
	std::cin >> n >> m;
	int w = 2;
	for (int max = 9; n * m > max; max = 10 * max + 9) {
		w = w + 1;
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			std::cout << std::setw(w) << i * j;
		}
		std::cout << std::endl;
	}
}
