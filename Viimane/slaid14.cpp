#include <stdexcept>
#include <cassert>

int divide(int a, int b) {
	if (b == 0) {
		throw std::invalid_argument("division by zero");
	}
	return a / b;
}

int main() {
	assert(divide(4, 2) == 2); // OK
	assert(divide(8, 2) == 4); // OK
	try {
		divide(1, 0); // see peab erindi tekitama
		assert(false); // siia ei tohiks kunagi jõuda
	} catch (const std::invalid_argument &) {
		assert(true); // see ei tee midagi
	} catch (...) {
		assert(false); // siia ei tohiks kunagi jõuda
	}
}
