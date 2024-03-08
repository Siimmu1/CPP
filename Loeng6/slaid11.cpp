#include <iostream>
#include <vector>
#include <string>

void print(const std::vector<std::string> & tudeng) {
	std::cout << tudeng[0] << " " << tudeng[1] << std::endl;
}

int main() {
	std::vector<std::vector<std::string>> tudengid;

	tudengid.push_back({"Mati", "mati@taltech.ee"});
	tudengid.push_back({"Kati", "kati@taltech.ee"});

	for (int i = 0; i < 2; ++i) {
		print(tudengid[i]);
	}
}
