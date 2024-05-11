#include <iostream>
#include <stdexcept>

bool process() {
	int n;
	while (std::cin >> n) {
		// kasutame n
	}
	if (std::cin.eof()) {
		// sizendi lõpp, kõik hästi
		return true;
	} else if (std::cin.fail()) {
		// vigane sisend
		return false;
	} else {
		// mingi tehniline viga
		throw std::runtime_error("unexpected error");
	}
}

int main() {
	if (process()) {
		// ...
	} else {
		// ...
	}
}
