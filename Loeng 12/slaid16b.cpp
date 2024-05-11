#include <iostream>
#include <optional>

// märkus: see pole kuigi efektiivne viis ruutjuurt arvutada
std::optional<int> sqrt(int n) {
	int x = 0;
	while (x * x < n) {
		++x;
	}
	if (x * x == n) {
		return x;
	} else {
		return std::nullopt;
	}
}

int main() {
	for (auto t : {1, 2, 3, 4}) {
		const auto x = sqrt(t);
		if (x) {
			std::cout << t << " = " << *x << "^2" << std::endl;
		} else {
			std::cout << t << " not a perfect square" << std::endl;
		}
	}
}
