#include <iostream>
#include <unordered_set>

int main() {
	int n;
	std::cin >> n;
	std::unordered_multiset<int> s;
	for (int i = 0; i < n; ++i) {
		int x;
		std::cin >> x;
		s.insert(x);
	}

	int m;
	std::cin >> m;
	for (int j = 0; j < m; ++j) {
		int x;
		std::cin >> x;
		std::cout << s.count(x) << std::endl;
	}
}
