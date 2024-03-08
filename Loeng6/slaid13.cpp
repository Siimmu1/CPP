#include <iostream>
#include <vector>
#include <string>
#include <tuple>

typedef std::tuple<std::string, std::string, int> tudeng;

void print(const tudeng & t) {
	std::cout << std::get<0>(t) << " " << std::get<2>(t) << std::endl;
}

int main() {
	std::vector<tudeng> tudengid;

	tudengid.push_back({"Mati", "mati@taltech.ee", 60});
	tudengid.push_back({"Kati", "kati@taltech.ee", 80});

	for (int i = 0; i < 2; ++i) {
		print(tudengid[i]);
	}
}
