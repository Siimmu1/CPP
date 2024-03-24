#include <iostream>

int globaalne_muutuja = 0;

struct klass {

	static int klassi_muutuja;

	int objekti_muutuja = 0;

	void meetod() {
		int meetodi_muutuja = 0;

		++globaalne_muutuja;
		++klassi_muutuja;
		++objekti_muutuja;
		++meetodi_muutuja;

		std::cout << globaalne_muutuja
			<< " " << klassi_muutuja
			<< " " << objekti_muutuja
			<< " " << meetodi_muutuja
			<< std::endl;
	}
};

int klass::klassi_muutuja = 0;

int main() {
	std::cout << "g " << globaalne_muutuja << std::endl;
	std::cout << "k " << klass::klassi_muutuja << std::endl;

	klass objekt_a;
	objekt_a.meetod();

	klass objekt_b;
	objekt_b.meetod();
	objekt_b.meetod();

	std::cout << "g " << globaalne_muutuja << std::endl;
	std::cout << "k " << klass::klassi_muutuja << std::endl;
	std::cout << "a " << objekt_a.objekti_muutuja << std::endl;
	std::cout << "b " << objekt_b.objekti_muutuja << std::endl;
}
