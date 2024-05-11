#include "repeat.h"

std::string operator* (const std::string & s, int n) {
	std::string res;
	for (int i = 0; i < n; ++i) {
		res += s;
	}
	return res;
}
