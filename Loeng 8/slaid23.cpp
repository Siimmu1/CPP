#include <iostream>

// vektori tüüp
struct Vektor2D {
	double x, y;
};

// vektori korrutamine skalaariga funktsioonina
Vektor2D multiply(double r, const Vektor2D & v) {
	return Vektor2D{r * v.x, r * v.y};
}


int main() {
	Vektor2D v1;
	std::cin >> v1;

	// korrutamine funktsiooniga
	Vektor2D v2 = multiply(2.0, v1);
	std::cout << v2 << std::endl;

}
