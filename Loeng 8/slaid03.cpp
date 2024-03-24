#include <iostream> // cout
#include <iomanip> // setw, setfill, setbase
#include <ios> // left

int main() {
	std::cout << 10 << std::endl;
	std::cout << std::setw(6) << 20 << std::endl;
	std::cout << std::left << std::setfill('*') << std::setw(6) << 30 << std::endl;
	std::cout << std::setbase(8) << 40 << std::endl;
}
