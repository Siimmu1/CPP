#include <iostream>
#include <string>

struct isik {
	std::string nimi;
	std::string uniid;
};

struct tudeng : isik {
	std::string eriala;

	void prindi_andmed() const {
		std::cout << "Nimi: " << nimi << std::endl;
		std::cout << "Uni-ID: " << uniid << std::endl;
		std::cout << "Eriala: " << eriala << std::endl;
	}
};

struct lektor : isik {
	std::string instituut;

	void prindi_andmed() const {
		std::cout << "Nimi: " << nimi << std::endl;
		std::cout << "Uni-ID: " << uniid << std::endl;
		std::cout << "Instituut: " << instituut << std::endl;
	}
};

int main() {
	tudeng kati = {"Kati Karu", "kati@taltech.ee", "YAFB02"};
	lektor mati = {"Mati Maru", "mati@taltech.ee", "CYB"};

	kati.prindi_andmed();
	mati.prindi_andmed();
}
