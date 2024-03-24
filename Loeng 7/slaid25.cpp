#include <iostream>

template<typename T>
struct Point2D {
	T x, y;
};

int main() {
	Point2D<int> p = {1, 2};
	Point2D<double> q = {1.0, 2.0};
	Point2D<double> r = {1, 2.0};
	//Point2D s = {1, 2}; // viga
}
