#include <iostream>
#include <iomanip>

int main() {
	int n, m;
	std::cin >> n >> m;
	int w = 1;
	for (int tmp = n * m; tmp > 0; tmp /= 10) {
		w += 1;
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			std::cout << std::setw(w) << i * j;
		}
		std::cout << std::endl;
	}
}
