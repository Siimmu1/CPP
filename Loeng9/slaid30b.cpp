#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

// lihtne test vector ja deque elementide poole pöördumise efektiivsuste võrdlemiseks
// pange tähele ka tulemuste erinevust optimeerimata ja optimeerimisega kompileerides

int main() {
	const int n = 10'000;
	const int k = 10'000;

	std::vector<int> v;
	for (int i = 0; i < n; ++i) {
		v.push_back(i);
	}
	auto t = std::clock();
	for (int j = 0; j < k; ++j) {
		for (int i = 0; i < n; ++i) {
			if (v[i] != i) {
				std::cerr << "panic" << std::endl;
			}
		}
	}
	t = std::clock() - t;
	std::cout << "vector " << t << std::endl;

	std::deque<int> d;
	for (int i = 0; i < n; ++i) {
		d.push_back(i);
	}
	auto u = std::clock();
	for (int j = 0; j < k; ++j) {
		for (int i = 0; i < n; ++i) {
			if (d[i] != i) {
				std::cerr << "panic" << std::endl;
			}
		}
	}
	u = clock() - u;
	std::cout << "deque " << u << std::endl;
}
