#include <iostream>
#include <string>
#include <map>

int main() {
	std::map<std::string, int> m{{"A", 1}, {"C", 2}};

	std::cout << m["A"] << std::endl;
	m["B"] = 3;
	m["C"] = 4;
	std::cout << m["D"] << std::endl;

	std::cout << std::endl;
	for (auto [k, v] : m) {
		std::cout << k << " -> " << v << std::endl;
	}

	std::cout << std::endl;
	for (auto x : m) {
		std::cout << x.first << " -> " << x.second << std::endl;
	}

	std::cout << std::endl;
	for (auto i = m.begin(); i != m.end(); ++i) {
		std::cout << i->first << " -> " << i->second << std::endl;
	}

	std::cout << std::endl;
	for (auto i = m.rbegin(); i != m.rend(); ++i) {
		std::cout << i->first << " -> " << i->second << std::endl;
	}
}
