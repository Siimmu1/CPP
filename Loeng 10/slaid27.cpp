#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<double> a{1.1, 1.2, 1.3};

	const auto s = std::accumulate(a.begin(), a.end(), 0.0);

	const auto t = std::accumulate(a.begin(), a.end(), 1.0,
		[](double x, double y){return x * y;});

	std::cout << s << " " << t << std::endl;
}
