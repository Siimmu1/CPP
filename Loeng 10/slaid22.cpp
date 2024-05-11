#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a{3, 1, 4, 1};
	int c = 0;
	for (auto x : {2, 3, 4, 5}) {
		const auto jagub = [x, &c](int n){++c; return n % x == 0;};
		const auto it = std::find_if(a.begin(), a.end(), jagub);
		if (it == a.end()) {
			std::cout << "Pole " << x << "-ga jaguvaid" << std::endl;
		} else {
			std::cout << "Esimene " << x << "-ga jaguv on " << *it << std::endl;
		}
	}
	std::cout << "Kokku " << c << " kontrolli" << std::endl;
}
