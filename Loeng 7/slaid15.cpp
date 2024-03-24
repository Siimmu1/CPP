#include <iostream>

struct klass {

	static int klassi_muutuja;

	int objekti_muutuja = 0;

	static void klassi_meetod() {
		++klassi_muutuja;
		std::cout << klassi_muutuja << std::endl;
	}

	void objekti_meetod() {
		++klassi_muutuja;
		++objekti_muutuja;
		std::cout << klassi_muutuja << " " << objekti_muutuja << std::endl;
	}
};

int klass::klassi_muutuja = 0;

int main() {
	std::cout << "k " << klass::klassi_muutuja << std::endl;
	klass::klassi_meetod();
	std::cout << "k " << klass::klassi_muutuja << std::endl;

	klass objekt_a;
	objekt_a.objekti_meetod();
	objekt_a.klassi_meetod(); // halb stiil

	std::cout << "k " << klass::klassi_muutuja << std::endl;
	std::cout << "a " << objekt_a.objekti_muutuja << std::endl;
}
