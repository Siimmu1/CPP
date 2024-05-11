#include <iostream>
#include <string>
#include <regex>

int main() {
	std::string s, t, u;
	std::cin >> s >> t >> u; // habras
	s = std::regex_replace(s, std::regex(t), u); // habras
	std::cout << s << std::endl;
}
