#include <iostream>
#include <string>
#include <regex>

int main() {
	std::string s = "kuulilennuteetunneliluuk";
	std::regex p1{"[ie]"};
	std::cout << std::regex_replace(s, p1, "_") << std::endl;
	std::regex p2{"i|e"};
	std::cout << std::regex_replace(s, p2, "_") << std::endl;
	std::regex p3{"uu|ee"};
	std::cout << std::regex_replace(s, p3, "*") << std::endl;
}
