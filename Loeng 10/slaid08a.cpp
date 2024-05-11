#include <iostream>
#include <vector>
#include <algorithm>

int lower_bound(const std::vector<int> & v, int x) {
	int i1 = 0, i2 = v.size();
	while (i1 < i2) {
		const int k = (i1 + i2) / 2;
		if (x > v[k]) {
			i1 = k + 1;
		} else {
			i2 = k;
		}
	}
	return i1;
}

int upper_bound(const std::vector<int> & v, int x) {
	int i1 = 0, i2 = v.size();
	while (i1 < i2) {
		const int k = (i1 + i2) / 2;
		if (x >= v[k]) {
			i1 = k + 1;
		} else {
			i2 = k;
		}
	}
	return i1;
}

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
		const auto lb = lower_bound(a, x);
		const auto ub = upper_bound(a, x);
		std::cout << ub - lb << std::endl;
	}
}
