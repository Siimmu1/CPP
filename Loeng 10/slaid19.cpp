#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{3, 1, 4, 1};
	const auto it = std::find_if(a.begin(), a.end(),
		[](int n){return n % 2 == 0;});
	if (it == a.end()) {
		std::cout << "Pole paarisarve" << std::endl;
	} else {
		std::cout << "Esimene paarisarv on " << *it << std::endl;
	}
}
