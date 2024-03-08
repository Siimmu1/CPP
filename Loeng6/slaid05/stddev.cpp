#include "stddev.h"

#include <cmath>

double stddev(const std::vector<double> & v) {
	// keskväärtus
	double e = 0;
	for (auto x : v) {
		e += x;
	}
	e /= v.size();
	// dispersioon
	double d = 0;
	for (auto x : v) {
		d += std::pow(e - x, 2);
	}
	d /= v.size();
	// standardhälve
	return std::sqrt(d);
}
