// kaasame jagatud deklaratsioonid
#include "sub.h"

// muutuja definitsioon
int count = 0;

// funktsiooni definitsioon
int sub(int a, int b) {
	++count;
	return a - b;
}
