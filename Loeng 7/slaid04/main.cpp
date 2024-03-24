#include <iostream>
#include "tudeng.h"
#include "kursus.h"

int main() {
	kursus k;
	tudeng t;
	while (std::cin >> t.uniid >> t.punktid) {
		k.lisa_tudeng(t);
	}
	std::cout << k.keskmine() << std::endl;
	k.valjasta_paremik();
}
