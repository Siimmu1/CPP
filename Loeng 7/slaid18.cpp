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

void saada_teade(const tudeng & t) {
	std::cout << "saadan teate " << t.nimi << "'le aadressile " << t.uniid << std::endl;
}

void saada_teade(const lektor & l) {
	std::cout << "saadan teate " << l.nimi << "'le aadressile " << l.uniid << std::endl;
}

int main() {
	tudeng kati = {"Kati Karu", "kati@taltech.ee", "YAFB02"};
	lektor mati = {"Mati Maru", "mati@taltech.ee", "CYB"};
	saada_teade(kati);
	saada_teade(mati);
}
