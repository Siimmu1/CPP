#include <iostream>
#include <unordered_map>

int main() {
	int n;
	std::cin >> n;
	std::unordered_map<int, int> s;
	for (int i = 0; i < n; ++i) {
		int x;
		std::cin >> x;
		++s[x];
	}

	int m;
	std::cin >> m;
	for (int j = 0; j < m; ++j) {
		int x;
		std::cin >> x;
		const auto it = s.find(x);
		if (it == s.end()) {
			std::cout << 0 << std::endl;
		} else {
			std::cout << it->second << std::endl;
		}
	}
}
