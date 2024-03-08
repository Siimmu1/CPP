#ifndef TUDENG_H_INCLUDED
#define TUDENG_H_INCLUDED

#include <string>

struct tudeng {
	// tudengi Uni-ID
	std::string uniid;

	// tudengi ainepunktide arv
	int punktid;

	// väljastab tudengi andmed
	void print() const;
};

#endif
