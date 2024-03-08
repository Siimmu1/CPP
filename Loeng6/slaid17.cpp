#include <iostream>

struct loendur {
private:
	int vaartus = 0;
public:
	void suurenda() {
		++vaartus;
	}
	int loe() const {
		return vaartus;
	}
};

int main() {
	loendur x;
	x.suurenda();
	x.suurenda();
	std::cout << x.loe() << std::endl; // 2
	//x.vaartus = 0; // viga, vaartus on privaatne
}
