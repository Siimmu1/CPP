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
	std::sort(a.begin(), a.end());

	int m;
	std::cin >> m;
	for (int j = 0; j < m; ++j) {
		int x;
		std::cin >> x;
		const auto lb = std::lower_bound(a.begin(), a.end(), x);
		const auto ub = std::upper_bound(a.begin(), a.end(), x);
		std::cout << ub - lb << std::endl;
	}
}
