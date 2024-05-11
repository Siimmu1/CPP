#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{2, 7, 1, 8, 2, 8};

	std::sort(a.begin(), a.end());
	const auto end = std::unique(a.begin(), a.end());

	std::cout << "Unikaalsed:";
	std::for_each(a.begin(), end,
		[](int n){std::cout << " " << n;});
	std::cout << std::endl;
}
