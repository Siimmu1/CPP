#include "stddev.h"

#include <numeric>
#include <cmath>

double stddev(const std::vector<double> & v) {
	const auto es = std::accumulate(v.begin(), v.end(), 0.0);
	const auto rs = std::inner_product(v.begin(), v.end(), v.begin(), 0.0);
	const auto d = (rs - es * es / v.size()) / v.size();
	return std::sqrt(d);
}
