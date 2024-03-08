#include <iostream>

// kaasame jagatud deklaratsioonid
#include "sub.h"

int main() {
	for (int a = 10; a <= 20; a += 5) {
		for (int b = 5; b <= 10; b += 5) {
			std::cout << a << " - " << b << " = " << sub(a, b) << std::endl;
		}
	}
	std::cout << "count = " << count << std::endl;
}
