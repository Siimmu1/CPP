#include "find.h"

std::optional<int> find(const std::vector<int> & a, int x) {
	unsigned lo = 0, hi = a.size();
	while (lo < hi) {
		unsigned mi = (lo + hi) / 2;
		if (a[mi] < x) {
			lo = mi + 1;
		} else {
			hi = mi;
		}
	}
	if (lo < a.size() && a[lo] == x) {
		return lo;
	} else {
		return std::nullopt;
	}
}
