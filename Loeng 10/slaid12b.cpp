#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
	// jätame iga tudengi ja iga ülesande kohta
	// jooksvalt meelde ainult parima skoori
	std::map<std::string, std::map<std::string, int>> scores;
	std::string uname, tname; int score;
	while (std::cin >> uname >> tname >> score) {
		const auto i1 = scores.find(uname);
		if (i1 == scores.end()) {
			// selle tudengi üldse esimene esitus
			scores.insert({uname, {{tname, score}}});
		} else {
			const auto i2 = i1->second.find(tname);
			if (i2 == i1->second.end()) {
				// selle tudengi selle ülesande esimene esitus
				i1->second.insert({tname, score});
			} else {
				// uus esitus, hoiame alles parima skoori
				i2->second = std::max(i2->second, score);
			}
		}
	}

	// käime läbi kõik tudengid ja iga tudengi kõik ülesanded
	// ja arvutame iga tudengi punktisumma
	for (auto i1 = scores.begin(); i1 != scores.end(); ++i1) {
		int total = 0;
		for (auto i2 = i1->second.begin(); i2 != i1->second.end(); ++i2) {
			total += i2->second;
		}
		std::cout << i1->first << " " << total << std::endl;
	}
}
