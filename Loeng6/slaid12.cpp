#include <iostream>
#include <vector>
#include <string>
#include <tuple>

void print(const std::tuple<std::string, std::string, int> & tudeng) {
	std::cout << std::get<0>(tudeng) << " " << std::get<2>(tudeng) << std::endl;
}

int main() {
	std::vector<std::tuple<std::string, std::string, int>> tudengid;

	tudengid.push_back({"Mati", "mati@taltech.ee", 60});
	tudengid.push_back({"Kati", "kati@taltech.ee", 80});

	for (int i = 0; i < 2; ++i) {
		print(tudengid[i]);
	}
}
