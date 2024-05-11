#include <iostream>
#include <map>

int main() {
	int n;
	std::cin >> n;
	std::map<int, int> s;
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
		std::cout << s[x] << std::endl;
	}
}
