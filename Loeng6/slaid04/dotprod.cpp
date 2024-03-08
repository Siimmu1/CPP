#include "dotprod.h"

double dotprod(const std::vector<double> & v1, const std::vector<double> & v2) {
	double res = 0;
	for (unsigned i = 0; i < v1.size(); ++i) {
		res += v1[i] * v2[i];
	}
	return res;
}
