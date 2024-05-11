#include <cassert>
#include <stdexcept>
#include "mathlib.h"

void test_add() {
	assert(add(2, 2) == 4);
	assert(add(1, 2) == 3);
	assert(add(2, 1) == 3);
}

void test_divide() {
	assert(divide(4, 2) == 2);
	assert(divide(8, 2) == 4);
	try {
		divide(1, 0);
		assert(false);
	} catch (const std::invalid_argument &) {
		assert(true);
	} catch (...) {
		assert(false);
	}
}

int main() {
	test_add();
	test_divide();
}
