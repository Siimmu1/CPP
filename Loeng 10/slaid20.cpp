#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{3, 1, 4, 1};
	for (auto x : {2, 3, 4, 5}) {
		const auto it = std::find_if(a.begin(), a.end(),
			[x](int n){return n % x == 0;});
		if (it == a.end()) {
			std::cout << "Pole " << x << "-ga jaguvaid" << std::endl;
		} else {
			std::cout << "Esimene " << x << "-ga jaguv on " << *it << std::endl;
		}
	}
}
