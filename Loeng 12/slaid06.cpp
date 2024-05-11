#include <iostream>
#include <string>

int main() {
	std::string s, t, u;
	std::getline(std::cin, s);
	std::getline(std::cin, t);
	std::getline(std::cin, u);

	std::string r;
	std::string::size_type i = s.find(t), j = 0;
	while (i != std::string::npos) {
		r.append(s.begin() + j, s.begin() + i);
		r.append(u);
		j = i + t.length();
		i = s.find(t, j);
	}
	r.append(s.begin() + j, s.end());
	std::cout << r << std::endl;
}
