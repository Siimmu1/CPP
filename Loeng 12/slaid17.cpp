#include <iostream>
#include <variant>

// märkus: see pole kuigi efektiivne viis ruutjuurt arvutada
std::variant<int, std::string> sqrt(int n) {
	int x = 0;
	while (x * x < n) {
		++x;
	}
	if (x * x == n) {
		return x;
	} else {
		return "not a perfect square";
	}
}

int main() {
	for (auto t : {1, 2, 3, 4}) {
		const auto x = sqrt(t);
		if (x.index() == 0) {
			std::cout << t << " = " << std::get<0>(x) << "^2" << std::endl;
		} else {
			std::cout << t << " " << std::get<1>(x) << std::endl;
		}
	}
}
