#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{2, 7, 1, 8, 2, 8};

	std::vector<int> b(a.size());
	const auto end = std::copy_if(a.begin(), a.end(), b.begin(),
		[](int n){return n % 2 == 0;});
	b.erase(end, b.end());

	std::cout << "Paarisarvud:";
	std::for_each(b.begin(), b.end(),
		[](int n){std::cout << " " << n;});
	std::cout << std::endl;
}
