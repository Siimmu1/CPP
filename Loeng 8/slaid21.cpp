#include <iostream>
#include <string>

struct tudeng {
	std::string nimi;
	std::string eriala;
};

std::ostream & operator<< (std::ostream & os, const tudeng & t) {
	return os << t.eriala << " tudeng " << t.nimi;
}

int main() {
	tudeng t{"Kati Karu", "YAFB02"};
	std::cout << t << std::endl;
}
