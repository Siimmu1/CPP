#include "find.h"

int find(int x, int n) {
	// vasakpoolne pistekoht
	int lo = 0, hi = n;
	while (lo < hi) {
		int mi = (lo + hi) / 2;
		if (get(mi) < x) {
			lo = mi + 1;
		} else {
			hi = mi;
		}
	}
	// elemendi kontrollimine
	if (lo < n && get(lo) == x) {
		return lo;
	} else {
		return -1;
	}
}
