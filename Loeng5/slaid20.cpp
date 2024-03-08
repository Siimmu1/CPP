#include <iostream>

// Add your code here

// NB! You MUST NOT change the main() function!
int main() {
	double r1, r2;
	std::cin >> r1 >> r2;
	std::cout << series(r1, r2) << " " << parallel(r1, r2) << std::endl;
}
