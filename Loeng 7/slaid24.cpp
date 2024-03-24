#include <iostream>
#include <string>

struct tudeng {
	std::string nimi;
	std::string uniid;
	std::string eriala;
};

struct lektor {
	std::string nimi;
	std::string uniid;
	std::string instituut;
};

template<typename T>
void saada_teade(const T & x) {
	std::cout << "saadan teate " << x.nimi << "'le aadressile " << x.uniid << std::endl;
}

int main() {
	tudeng kati = {"Kati Karu", "kati@taltech.ee", "YAFB02"};
	lektor mati = {"Mati Maru", "mati@taltech.ee", "CYB"};

	saada_teade(kati);
	saada_teade(mati);
}
