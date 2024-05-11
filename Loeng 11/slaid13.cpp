#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	for (auto & x : a) std::cin >> x;
	for (auto & x : b) std::cin >> x;

	std::vector<int> da, db;
	auto ia = a.begin(), ib = b.begin();
	while (ia != a.end() and ib != b.end()) {
		if (*ia < *ib) {
			da.push_back(*ia);
			++ia;
			continue;
		}
		if (*ib < *ia) {
			db.push_back(*ib);
			++ib;
			continue;
		}
		// *ia == *ib
		++ia; ++ib;
	}
	while (ia != a.end()) {
		da.push_back(*ia);
		++ia;
	}
	while (ib != b.end()) {
		db.push_back(*ib);
		++ib;
	}

	// ...
}
