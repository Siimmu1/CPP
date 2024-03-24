#include <iostream> // cout
#include <iomanip> // setprecision, setw, setfill
#include <ios> // fixed, scientific, defaultfloat, showpoint, internal

int main() {
	std::cout << std::setprecision(3);

	std::cout << 10.0 << std::endl;
	std::cout << std::setw(10) << 20.0 << std::endl;

	std::cout << std::fixed;
	std::cout << 30.0 << std::endl;
	std::cout << std::setw(10) << 40.0 << std::endl;

	std::cout << std::scientific;
	std::cout << 50.0 << std::endl;
	std::cout << std::setw(10) << 60.0 << std::endl;

	std::cout << std::defaultfloat << std::showpoint;
	std::cout << std::internal << std::setfill('*') << std::setw(10) << -70.0 << std::endl;
}
