#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct sub {
	std::string uname;
	std::string tname;
	int score = 0;
};

// võrdlemine sorteerimiseks:
// sorteerime kasutajanimede järgi
// sama kasutaja omad ülesandenimede järgi
// sama ülesande omad skooride järgi
bool operator< (const sub & s1, const sub & s2) {
	if (s1.uname != s2.uname) {
		return s1.uname < s2.uname;
	}
	if (s1.tname != s2.tname) {
		return s1.tname < s2.tname;
	}
	return s1.score < s2.score;
}

int main() {
	std::vector<sub> ss;
	for (sub s; std::cin >> s.uname >> s.tname >> s.score; ) {
		ss.push_back(s);
	}

	std::sort(ss.begin(), ss.end());

	int total = 0;
	for (unsigned i = 0; i < ss.size(); ++i) {
		if (i + 1 == ss.size() || ss[i].uname != ss[i + 1].uname) {
			// selle tudengi viimane rida
			total += ss[i].score;
			std::cout << ss[i].uname << " " << total << std::endl;
			total = 0; // järgmise tudengi skoor algab nullist
		} else if (ss[i].tname != ss[i + 1].tname) {
			// selle ülesande parim tulemus
			total += ss[i].score;
		}
	}
}
