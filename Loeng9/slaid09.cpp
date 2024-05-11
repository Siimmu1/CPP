#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	int n, m;
	std::cin >> n >> m;
	const int w = 2 + int(std::log10(n * m));
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			std::cout << std::setw(w) << i * j;
		}
		std::cout << std::endl;
	}
}
