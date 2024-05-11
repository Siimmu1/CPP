#include <complex>
#include <cassert>

int main() {
	//assert(std::complex<double>{0, 0} == 0.0); // nii ei saa
	assert((std::complex<double>{0, 0} == 0.0)); // OK
}
