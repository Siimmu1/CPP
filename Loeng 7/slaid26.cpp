#include <iostream>

template<typename T>
struct Point2D {
	T x, y;
	Point2D(T x, T y) : x{x}, y{y} {}
};

int main() {
	Point2D p = {1, 2};
	Point2D q = {1.0, 2.0};
	Point2D<double> r = {1, 2.0};
	//Point2D s = {1, 2.0}; // viga
}
