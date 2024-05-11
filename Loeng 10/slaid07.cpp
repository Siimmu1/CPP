#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	int m;
	std::cin >> m;
	for (int j = 0; j < m; ++j) {
		int x;
		std::cin >> x;
		const int c = std::count(a.begin(), a.end(), x);
		std::cout << c << std::endl;
	}
}
