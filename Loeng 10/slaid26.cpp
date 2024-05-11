#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
	std::vector<int> a{2, 7, 1, 8, 2, 8};

	std::vector<int> b;
	std::copy_if(a.begin(), a.end(),
		std::back_inserter(b),
		[](int n){return n % 2 == 0;});

	std::cout << "Paarisarvud:";
	std::for_each(b.begin(), b.end(),
		[](int n){std::cout << " " << n;});
	std::cout << std::endl;
}
