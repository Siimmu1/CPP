#include <iostream>

int f(int a, int b = 0, int c = 1) {
	return (a + b) * c;
}

int main() {
	const int f1 = f(1, 1, 2); // --> 4
	const int f2 = f(1, 1); // == f(1, 1, 1) --> 2
	const int f3 = f(1); // == f(1, 0, 1) --> 1
	// const int f4 = f() oleks viga, a pole valikuline
	// const int f5 = f(1, , 1) oleks viga, ei saa anda c väärtust ilma b väärtuseta
	std::cout << f1 << " " << f2 << " " << f3 << std::endl;
}
