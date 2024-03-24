#include <iostream>
#include <string>

struct isik {
	std::string nimi;
	std::string uniid;
};

struct tudeng : isik {
	std::string eriala;
};

struct lektor : isik {
	std::string instituut;
};

void saada_teade(const isik & i) {
	std::cout << "saadan teate " << i.nimi << "'le aadressile " << i.uniid << std::endl;
}

int main() {
	tudeng kati = {"Kati Karu", "kati@taltech.ee", "YAFB02"};
	lektor mati = {"Mati Maru", "mati@taltech.ee", "CYB"};

	saada_teade(kati);
	saada_teade(mati);
}
