#include "stddev.h"

#include <cmath>

double stddev(const std::vector<double> & v) {
	double es = 0; // elementide summa
	double rs = 0; // ruutude summa
	for (auto x : v) {
		es += x;
		rs += x * x;
	}
	// dispersioon
	const double d = (rs - es * es / v.size()) / v.size();
	// standardhälve
	return std::sqrt(d);
}
