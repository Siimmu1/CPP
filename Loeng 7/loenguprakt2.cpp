#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
struct Point2D {
	T x, y;
};

template<typename T1, typename T2>
double distance(const Point2D<T> & p2, const Point2D<T> & p2) {
    return std::hypot(p1.x - p2.x, p1.y - p2.y)
}

int main() {
	Point2D<int> A = {1, 2};
    Point2D<int> B = {0, 2};
	Point2D<double> C = {1.0, 2.0};
	Point2D<double> D = {1, 2.0};
    cout << distance(A, B) << endl;
    cout << distance(C, B) << endl;
    cout << distance(B, C) << endl;
	//Point2D s = {1, 2}; // viga
}


