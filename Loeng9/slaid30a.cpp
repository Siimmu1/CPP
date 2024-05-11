#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

// lihtne test vector ja deque erinevate lisamiste efektiivsuste võrdlemiseks
// pange tähele ka tulemuste erinevust optimeerimata ja optimeerimisega kompileerides

int main() {
	const int n = 100'000;

	auto t0 = std::clock();
	std::vector<int> v0;
	for (int i = 0; i < n; ++i) {
		v0.push_back(i);
	}
	t0 = std::clock() - t0;
	std::cout << "vector loppu push " << t0 << std::endl;

	auto t1 = std::clock();
	std::vector<int> v1;
	for (int i = 0; i < n; ++i) {
		v1.insert(v1.end(), i);
	}
	t1 = std::clock() - t1;
	std::cout << "vector loppu insert " << t1 << std::endl;

	auto t2 = std::clock();
	std::vector<int> v2;
	for (int i = 0; i < n; ++i) {
		v2.insert(v2.begin() + v2.size() / 2, i);
	}
	t2 = std::clock() - t2;
	std::cout << "vector keskele insert " << t2 << std::endl;

	auto t3 = std::clock();
	std::vector<int> v3;
	for (int i = 0; i < n; ++i) {
		v3.insert(v3.begin(), i);
	}
	t3 = std::clock() - t3;
	std::cout << "vector algusse insert " << t3 << std::endl;

	auto u0 = std::clock();
	std::deque<int> d0;
	for (int i = 0; i < n; ++i) {
		d0.push_back(i);
	}
	u0 = std::clock() - u0;
	std::cout << "deque loppu push " << u0 << std::endl;

	auto u1 = std::clock();
	std::deque<int> d1;
	for (int i = 0; i < n; ++i) {
		d1.insert(d1.end(), i);
	}
	u1 = std::clock() - u1;
	std::cout << "deque loppu insert " << u1 << std::endl;

	auto u2 = std::clock();
	std::deque<int> d2;
	for (int i = 0; i < n; ++i) {
		d2.insert(d2.begin() + d2.size() / 2, i);
	}
	u2 = std::clock() - u2;
	std::cout << "deque keskele insert " << u2 << std::endl;

	auto u3 = std::clock();
	std::deque<int> d3;
	for (int i = 0; i < n; ++i) {
		d3.insert(d3.begin(), i);
	}
	u3 = std::clock() - u3;
	std::cout << "deque algusse insert " << u3 << std::endl;

	auto u4 = std::clock();
	std::deque<int> d4;
	for (int i = 0; i < n; ++i) {
		d4.push_front(i);
	}
	u4 = std::clock() - u4;
	std::cout << "deque algusse push " << u4 << std::endl;
}
