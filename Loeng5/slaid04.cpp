#include <iostream>
#include <cmath> // sqrt(), pow()
#include <algorithm> // min(), max()

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	if (a == 0 and b == 0 and c == 0) {
		// tautoloogia, kõik reaalarvud on lahendid
		std::cout << "INF" << std::endl;
	} else if (a == 0 and b == 0) {
		// vastuolu, lahend puudub
		std::cout << 0 << std::endl;
	} else if (a == 0) {
		// mittekõdunud lineaarvõrrand, ühene lahend
		std::cout << 1 << std::endl;
		const auto x = -c / b;
		std::cout << x << std::endl;
	} else {
		// päris ruutvõrrand
		const auto d = pow(b, 2) - 4 * a * c;
		if (d > 0) {
			// diskriminant positiivne, kaks erinevat lahendit
			std::cout << 2 << std::endl;
			const auto x1 = (-b - std::sqrt(d)) / (2 * a);
			const auto x2 = (-b + std::sqrt(d)) / (2 * a);
			// väljastame lahendid väärtuste järjekorras
			std::cout << std::min(x1, x2) << std::endl;
			std::cout << std::max(x1, x2) << std::endl;
		} else if (d == 0) {
			// diskriminant null, üks kahekordne lahend
			std::cout << 1 << std::endl;
			const auto x = -b / (2 * a);
			std::cout << x << std::endl;
		} else {
			// diskriminant negatiivne, reaalarvulisi lahendeid pole
			std::cout << 0 << std::endl;
		}
	}
}
