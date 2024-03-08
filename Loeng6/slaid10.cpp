#include <iostream>
#include <vector>
#include <string>

void print(const std::string & nimi, const std::string & aadress) {
	std::cout << nimi << " " << aadress << std::endl;
}

int main() {
	std::vector<std::string> nimed;
	std::vector<std::string> aadressid;

	nimed.push_back("Mati"); aadressid.push_back("mati@taltech.ee");
	nimed.push_back("Kati"); aadressid.push_back("kati@taltech.ee");

	for (int i = 0; i < 2; ++i) {
		print(nimed[i], aadressid[i]);
	}
}
