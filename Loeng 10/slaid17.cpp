#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{3, 1, 4, 1};
	for (auto x : {1, 2, 3, 4, 5}) {
		const auto it = std::find(a.begin(), a.end(), x);
		if (it == a.end()) {
			std::cout << x << " pole jadas" << std::endl;
		} else {
			std::cout << x << " on jadas" << std::endl;
		}
	}
}
