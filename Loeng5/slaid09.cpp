#include <iostream>
#include <vector>

int main() {
	int m;
	std::cin >> m;

	// s[i][j] on i-elemendilise hulga tükeldused j tükiks
	std::vector<std::vector<int>> s(1 + m, std::vector<int>(1 + m));
	s[1][1] = 1;
	for (int i = 2; i <= m; ++i) {
		for (int j = 1; j <= i; ++j) {
			// kasutab ära, et s on nullidega algväärtustatud
			s[i][j] = j * s[i - 1][j] + s[i - 1][j - 1];
		}
	}

	// vastus on s[m][1..m] summa
	int b = 0;
	for (int j = 1; j <= m; ++j) {
		b += s[m][j];
	}
	std::cout << b << std::endl;
}
