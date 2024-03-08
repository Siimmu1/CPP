#include <iostream>
#include <string>

void add_check(std::string & seq) {
	int sum = 0;
	for (auto digit : seq) {
		sum += digit - '0';
	}
	sum = (10 - sum % 10) % 10;
	seq += '0' + sum;
}

int main() {
	std::string s;
	std::cin >> s;
	add_check(s);
	std::cout << s << std::endl;
}
