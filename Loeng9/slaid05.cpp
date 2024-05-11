#include <iostream>
#include <iomanip>

int main() {
	int n, m;
	std::cin >> n >> m;
	int w;
	if (n * m <= 9) {
		w = 2;
	} else if (n * m <= 99) {
		w = 3;
	} else if (n * m <= 999) {
		w = 4;
	} else if (n * m <= 9999) {
		w = 5;
	} else { // 300 * 300 <= 99999
		w = 6;
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			std::cout << std::setw(w) << i * j;
		}
		std::cout << std::endl;
	}
}
