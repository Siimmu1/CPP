#include <iostream>

// Add your code here
double series( double r1, double r2) {
    double Rs;
    Rs = r1 + r2;
    return Rs;
}

double parallel(double r1, double r2) {
    double Rp;
    Rp = (1 / (1 / r1 + 1 / r2));
    return Rp;
}
// NB! You MUST NOT change the main() function!
int main() {
	double r1, r2;
	std::cin >> r1 >> r2;
	std::cout << series(r1, r2) << " " << parallel(r1, r2) << std::endl;
}
