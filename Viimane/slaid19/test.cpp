#include "find.h"
#include <cassert>

int main() {
	// tühi jada
	std::vector<int> v0;
	assert(!find(v0, 0));

	// üheelemendiline jada
	std::vector<int> v1{0};
	assert(!find(v1, -1));
	assert(v1[find(v1, 0).value()] == 0);
	assert(!find(v1, +1));

	// unikaalsete elementidega jada
	std::vector<int> v2{1, 3, 5};
	assert(!find(v2, 0));
	assert(v2[find(v2, 1).value()] == 1);
	assert(!find(v2, 2));
	assert(v2[find(v2, 3).value()] == 3);
	assert(!find(v2, 4));
	assert(v2[find(v2, 5).value()] == 5);
	assert(!find(v2, 6));

	// korduvate elementidega jada
	std::vector<int> v3{-1, -1, 0, 0, 1, 1};
	assert(!find(v3, -2));
	assert(v3[find(v3, -1).value()] == -1);
	assert(v3[find(v3, 0).value()] == 0);
	assert(v3[find(v3, +1).value()] == +1);
	assert(!find(v3, +2));

	// pistelised kontrollid natuke pikemas jadas
	// jõudlustest see siiski veel pole
	std::vector<int> v4;
	for (int i = -100; i <= 100; i += 2) {
		v4.push_back(i);
	}
	assert(!find(v4, -200));
	assert(v4[find(v4, -100).value()] == -100);
	assert(!find(v4, -99));
	assert(v4[find(v4, -50).value()] == -50);
	assert(!find(v4, -1));
	assert(v4[find(v4, 0).value()] == 0);
	assert(!find(v4, +1));
	assert(v4[find(v4, +50).value()] == +50);
	assert(!find(v4, +99));
	assert(v4[find(v4, +100).value()] == +100);
	assert(!find(v4, +200));
}
