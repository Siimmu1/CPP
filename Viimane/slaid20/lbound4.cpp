// vigane versioon number 4

int lower_bound(const std::vector<int> & a, int x) {
	unsigned lo = 0, hi = a.size();
	while (lo < hi) {
		unsigned mi = (lo + hi) / 2;
		if (a[mi] < x) {
			lo = mi + 1;
		} else {
			hi = mi - 1;
		}
	}
	return lo;
}
