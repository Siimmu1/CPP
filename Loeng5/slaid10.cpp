#include <iostream>

int f(int a, int & b, const int & c) {
	a += 1;
	b += 1;
	// c += 1 oleks viga, sest c on const
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	return a + b + c;
}

int main() {
	int x = 1, y = 2, z = 3;
	const int f1 = f(x, y, z); // 2+3+3 --> 8
	std::cout << "f1 = " << f1 << std::endl;
	std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl; // 1 3 3

	int t = 1;
	// f(1, 1, 1) oleks viga, sest b on viide ja pole const
	const int f2 = f(1, t, 1); // 2+2+1 --> 5
	std::cout << "f2 = " << f2 << std::endl;
	const int f3 = f(t, t, t); // 3+3+3 --> 9
	std::cout << "f3 = " << f3 << std::endl;
}
