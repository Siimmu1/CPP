#include <iostream>
#include <vector>
#include <optional>
#include <stdexcept>
#include <string>

// tagastab leitud indeksi või -1
int find1(std::vector<int> const & v, int x) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == x) {
			return i;
		}
	}
	return -1;
}

// tagastab leitud indeksi või nullopt
std::optional<int> find2(std::vector<int> const & v, int x) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == x) {
			return i;
		}
	}
	return std::nullopt;
}

// tagastab leitud iteraatori või v.end()
std::vector<int>::const_iterator find3(std::vector<int> const & v, int x) {
	for (auto i = v.begin(); i != v.end(); ++i) {
		if (*i == x) {
			return i;
		}
	}
	return v.end();
}

// tagastab true/false, leidmise korral salvestab indeksi muutujasse r
bool find4(std::vector<int> const & v, int x, int & r) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == x) {
			r = i;
			return true;
		}
	}
	return false;
}

// tagastab true/false, leidmise korral salvestab indeksi aadressil p olevasse muutujasse
bool find5(std::vector<int> const & v, int x, int * p) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == x) {
			if (p != nullptr) {
				*p = i;
			}
			return true;
		}
	}
	return false;
}

// tagastab leitud indeksi või tekitab erindi
int find6(std::vector<int> const & v, int x) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == x) {
			return i;
		}
	}
	throw std::domain_error("find6(): not found");
}

int main() {
	std::vector<int> v = {1, 3, 5};
	for (int x = 0; x <= 6; ++x) {
		std::cout << "find1: " << x << " -> " << find1(v, x) << std::endl;
		if (const auto r = find2(v, x); r.has_value()) {
			std::cout << "find2: " << x << " -> " << *r << std::endl;
		} else {
			std::cout << "find2: " << x << " -> " << "nullopt" << std::endl;
		}
		std::cout << "find3: " << x << " -> " << std::boolalpha << (find3(v, x) != v.end()) << std::endl;
		if (int r; find4(v, x, r)) {
			std::cout << "find4: " << x << " -> " << r << std::endl;
		} else {
			std::cout << "find4: " << x << " -> " << "false" << std::endl;
		}
		if (int r; find5(v, x, &r)) {
			std::cout << "find5: " << x << " -> " << r << std::endl;
		} else {
			std::cout << "find5: " << x << " -> " << "false" << std::endl;
		}
		try {
			std::cout << "find6: " << x << " -> " << find6(v, x) << std::endl;
		} catch (std::domain_error & x) {
			std::cout << x.what() << std::endl;
		}
		std::string s;
		std::getline(std::cin, s);
	}
}
