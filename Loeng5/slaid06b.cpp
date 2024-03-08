#include <iostream>
#include <limits> // numeric_limits

int main() {
	const auto int_min = std::numeric_limits<int>::min();
	const auto int_max = std::numeric_limits<int>::max();
	int a, b;
	std::cin >> a >> b;
	if ((a > 0 and b > int_max - a) or (a < 0 and b < int_min - a)) {
		std::cout << "NO" << std::endl;
	} else {
		std::cout << "YES" << std::endl << a + b << std::endl;
	}
}
