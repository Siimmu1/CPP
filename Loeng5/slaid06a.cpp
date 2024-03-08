#include <iostream>
#include <climits> // INT_MIN, INT_MAX

int main() {
	int a, b;
	std::cin >> a >> b;
	if ((a > 0 and b > INT_MAX - a) or (a < 0 and b < INT_MIN - a)) {
		std::cout << "NO" << std::endl;
	} else {
		std::cout << "YES" << std::endl << a + b << std::endl;
	}
}
