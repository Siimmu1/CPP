#include <iostream>

int f(int a) {
	return a + 1;
}

double f(double a) {
	return a + 2;
}

// nii ei saa: int f(int a) vs double f(int a)
// double f(int a) {
// 	return a + 3;
// }

int main() {
	std::cout << f(1) << std::endl; // int f(int a) --> 2
	std::cout << f(1.0) << std::endl; // double f(double a) --> 3
}
