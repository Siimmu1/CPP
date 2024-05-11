#include <cassert>

int add(int a, int b) {
	return a + b;
}

int main() {
	assert(add(2, 2) == 4);
	assert(add(1, 2) == 3);
	assert(add(2, 1) == 3);
}
