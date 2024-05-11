#include <iostream>
#include <string>
#include <map>

int main() {
	int n;
	std::cin >> n;

	// loeme eesnimi->perenimi vastavused
	std::map<std::string, std::string> ep;
	for (int i = 0; i < n; ++i) {
		std::string e, p;
		std::cin >> e >> p;
		ep[e] = p;
	}

	// töötleme eesnimi-kasutajanimi paarid
	for (int i = 0; i < n; ++i) {
		std::string e, k;
		std::cin >> e >> k;
		std::cout << ep[e] << " " << k << std::endl;
	}
}
