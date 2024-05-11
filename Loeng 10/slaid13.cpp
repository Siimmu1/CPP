#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

int main() {
	std::vector<std::tuple<std::string, std::string, int>> ss;
	std::string uname, tname; int score;
	while (std::cin >> uname >> tname >> score) {
		ss.push_back({uname, tname, score});
	}

	// sorteerime kasutajanimede järgi
	// sama kasutaja omad ülesandenimede järgi
	// sama ülesande omad skooride järgi
	std::sort(ss.begin(), ss.end());

	int total = 0;
	for (unsigned i = 0; i < ss.size(); ++i) {
		if (i + 1 == ss.size() || std::get<0>(ss[i]) != std::get<0>(ss[i + 1])) {
			// selle tudengi viimane rida -> viimase ülesande parim tulemus
			total += std::get<2>(ss[i]);
			std::cout << std::get<0>(ss[i]) << " " << total << std::endl;
			total = 0; // järgmise tudengi skoor algab nullist
		} else if (std::get<1>(ss[i]) != std::get<1>(ss[i + 1])) {
			// selle ülesande viimane rida -> parim tulemus
			total += std::get<2>(ss[i]);
		}
	}
}
