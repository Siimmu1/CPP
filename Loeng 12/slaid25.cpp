#include <cstdio>
#include <cerrno>

int main() {
	FILE * f = std::fopen("input.txt", "rt");
	if (f) {
		// OK
	} else if (errno == ENOENT) {
		// pole faili
	} else if (errno == EACCES) {
		// pole õigusi
	} else {
		// ...
	}
}
