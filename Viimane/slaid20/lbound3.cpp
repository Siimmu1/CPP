// vigane versioon number 3

int lower_bound(const std::vector<int> & a, int x) {
	unsigned lo = 0, hi = a.size();
	while (lo < hi) {
		unsigned mi = (lo + hi) / 2;
		if (a[mi] < x) {
			lo = mi;
		} else {
			hi = mi;
		}
	}
	return lo;
}
