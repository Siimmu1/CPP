#include <iostream>
#include <vector>
#include <algorithm>

bool paaris(int n) {
	return n % 2 == 0;
}

int main() {
	std::vector<int> a{3, 1, 4, 1};
	const auto it = std::find_if(a.begin(), a.end(), paaris);
	if (it == a.end()) {
		std::cout << "Pole paarisarve" << std::endl;
	} else {
		std::cout << "Esimene paarisarv on " << *it << std::endl;
	}
}
