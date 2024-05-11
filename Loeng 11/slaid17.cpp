#include <iostream>
#include <string>

int main() {
	std::string s = "abraka";
	std::cout << s << std::endl;
	s.append("dabra");
	std::cout << s << std::endl;
	s.insert(6, "dabraka");
	std::cout << s << std::endl;
	s.erase(0, 7);
	std::cout << s << std::endl;
	s.replace(4, 2, "kadabraka");
	std::cout << s << std::endl;
}
