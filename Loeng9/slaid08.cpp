#include <iostream>
#include <iomanip>
#include <string>

int main() {
	int n, m;
	std::cin >> n >> m;
	const int w = 1 + std::to_string(n * m).length();
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			std::cout << std::setw(w) << i * j;
		}
		std::cout << std::endl;
	}
}
