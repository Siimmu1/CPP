#include <iostream>
#include <vector>
#include <string>

struct tudeng {
	std::string nimi;
	std::string aadress;
	int ainepunktid;

	void print() const {
		std::cout << nimi << " " << ainepunktid << std::endl;
	}
};

int main() {
	std::vector<tudeng> tudengid;

	tudengid.push_back({"Mati", "mati@taltech.ee", 60});
	tudengid.push_back({"Kati", "kati@taltech.ee", 80});

	for (int i = 0; i < 2; ++i) {
		tudengid[i].print();
	}
}
