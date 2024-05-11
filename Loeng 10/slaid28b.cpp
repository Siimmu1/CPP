#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{2, 7, 1, 8, 2, 8};

	std::sort(a.begin(), a.end(),
		[](int x, int y){return x > y;});

	for (auto n : a) {
		std::cout << " " << n;
	}
	std::cout << std::endl;
}
