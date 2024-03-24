#ifndef KURSUS_H_INCLUDED
#define KURSUS_H_INCLUDED

#include <vector>

#include "tudeng.h"

struct kursus {
	// kursuse nimekiri
	std::vector<tudeng> tudengid;

	// lisab kursuse nimekirja uue tudengi
	void lisa_tudeng(const tudeng & t);

	// leiab kursuse keskmise ainepunktide arvu
	// kui kursusel tudengeid ei ole, tagastab 0
	double keskmine();

	// väljastab tudengi print() meetodiga need
	// tudengid, kellel ainepunktide arv on üle
	// kursuse keskmise
	void valjasta_paremik();
};

#endif
