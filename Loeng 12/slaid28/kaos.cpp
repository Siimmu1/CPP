#include "kaos.h"
#include <stdexcept>

// see on näide, serveris on lahenduste testimisel natuke teistsugune funktsioon f

std::variant<int, double, std::string> f(int n) {
	if (n == 1) {
		return n + 1;
	}
	if (n == 2) {
		return n * 1.1;
	}
	if (n == 3) {
		return "abc";
	}
	throw std::logic_error("test");
}
