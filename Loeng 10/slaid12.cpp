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
		// uue kasutajanimega scores[uname] pöördumine tekitab uname->{}
		// uue ülesandenimega scores[uname][tname] tekitab tname->0
		scores[uname][tname] = std::max(scores[uname][tname], score);
	}

	// käime läbi kõik tudengid ja iga tudengi kõik ülesanded
	// ja arvutame iga tudengi punktisumma
	for (const auto & [uname, tasks] : scores) {
		int total = 0;
		for (const auto & [tname, score] : tasks) {
			total += score;
		}
		std::cout << uname << " " << total << std::endl;
	}
}
