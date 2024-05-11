#include <iostream>
#include <string>
#include <map>

int main() {
	int n;
	std::cin >> n;
	std::string s;
	getline(std::cin, s);

	// loeme eesnimi->perenimi vastavused
	std::map<std::string, std::string> ep;
	for (int i = 0; i < n; ++i) {
		std::string e, p;
		getline(std::cin, e, ' ');
		getline(std::cin, p);
		ep[e] = p;
	}

	// töötleme eesnimi-kasutajanimi paarid
	for (int i = 0; i < n; ++i) {
		std::string e, k;
		getline(std::cin, e, ' ');
		getline(std::cin, k);
		std::cout << ep[e] << " " << k << std::endl;
	}
}
