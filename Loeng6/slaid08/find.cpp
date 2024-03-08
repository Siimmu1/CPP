// lineaarne otsing
// leiab õiged vastused
// aga teeb liiga palju get() päringuid

#include "find.h"

int find(int x, int n) {
	for (int i = 0; i < n; ++i) {
		if (get(i) == x) {
			return i;
		}
	}
	return -1;
}
