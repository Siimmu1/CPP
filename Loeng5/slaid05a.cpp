#include <iostream>
#include <string>

void add_check(std::string & seq) {
	int sum = 0;
	for (unsigned i = 0; i < seq.length(); ++i) {
		sum += std::stoi(seq.substr(i, 1));
	}
	if (sum % 10 == 0) {
		seq += "0";
	} else {
		seq += std::to_string(10 - sum % 10);
	}
}

int main() {
	std::string s;
	std::cin >> s;
	add_check(s);
	std::cout << s << std::endl;
}
