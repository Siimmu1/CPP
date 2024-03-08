#include <iostream>
#include <vector>
#include <cassert>

#include "find.h"

// main.cpp privaatsed muutujad
static int n;
static std::vector<int> a;
static int x;
static int c = 0;

// jagatud funktsiooni definitsioon
int get(int i) {
	assert(0 <= i and i < n);
	assert(c < 25);
	++c;
	return a[i];
}

int main() {
	std::cin >> n;
	a.resize(n);
	for (auto & i : a) {
		std::cin >> i;
	}
	std::cin >> x;
	std::cout << find(x, n) << std::endl;
}
