#include <cassert>

class loendur {
	int vaartus = 0;
public:
	void suurenda() {
		++vaartus;
	}
	int loe() {
		return vaartus;
	}
};

int main() {
	loendur x;
	assert(x.loe() == 0);
	x.suurenda();
	assert(x.loe() == 1);
	loendur y;
	y.suurenda();
	y.suurenda();
	y.suurenda();
	assert(y.loe() == 3);
	assert(x.loe() == 1);
}
