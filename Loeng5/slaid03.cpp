#include <iostream>
#include <cmath> // sqrt()

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	if (a != 0) {
		// päris ruutvõrrand
		const auto d = b * b - 4 * a * c;
		if (d < 0) {
			// diskriminant negatiivne, reaalarvulisi lahendeid pole
			std::cout << 0 << std::endl;
		} else if (d == 0) {
			// diskriminant null, üks kahekordne lahend
			std::cout << 1 << std::endl;
			const auto x = -b / (2 * a);
			std::cout << x << std::endl;
		} else {
			// diskriminant positiivne, kaks erinevat lahendit
			std::cout << 2 << std::endl;
			const auto x1 = (-b - std::sqrt(d)) / (2 * a);
			const auto x2 = (-b + std::sqrt(d)) / (2 * a);
			if (a > 0) {
				// kui a > 0, siis x1 < x2
				std::cout << x1 << std::endl << x2 << std::endl;
			} else {
				// kui a < 0, siis x1 > x2
				std::cout << x2 << std::endl << x1 << std::endl;
			}
		}
	} else if (b != 0) {
		// mittekõdunud lineaarvõrrand, ühene lahend
		std::cout << 1 << std::endl;
		const auto x = -c / b;
		std::cout << x << std::endl;
	} else if (c != 0) {
		// vastuolu, lahend puudub
		std::cout << 0 << std::endl;
	} else {
		// tautoloogia, kõik reaalarvud on lahendid
		std::cout << "INF" << std::endl;
	}
}
