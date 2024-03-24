#include "kursus.h"

void kursus::lisa_tudeng(const tudeng & t) {
	tudengid.push_back(t);
}

double kursus::keskmine() {
	if (tudengid.empty()) {
		return 0;
	}
	double summa = 0;
	for (const auto & t : tudengid) {
		summa += t.punktid;
	}
	return summa / tudengid.size();
}

void kursus::valjasta_paremik() {
	const auto k = keskmine();
	for (const auto & t : tudengid) {
		if (t.punktid > k) {
			t.print();
		}
	}
}
