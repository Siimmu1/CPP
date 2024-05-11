#include <iostream>
#include <vector>

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
		int c = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] == x) {
				++c;
			}
		}
		std::cout << c << std::endl;
	}
}
