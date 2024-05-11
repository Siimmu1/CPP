#include <iostream>
#include <cstring>
#include <algorithm>
#include <iterator>

constexpr int maxs = 1000;
constexpr int maxt = 10;
constexpr int maxu = 10;

int main() {
	char s[maxs + 1], t[maxt + 1], u[maxu + 1];
	std::cin.getline(s, sizeof(s));
	std::cin.getline(t, sizeof(t));
	std::cin.getline(u, sizeof(u));
	const auto slen = std::strlen(s), tlen = std::strlen(t), ulen = std::strlen(u);

	auto out = std::ostream_iterator<char>(std::cout);
	auto q = s, p = std::strstr(q, t);
	while (p != nullptr) {
		std::copy(q, p, out);
		std::copy(u, u + ulen, out); // std::cout << u;
		q = p + tlen; p = std::strstr(q, t);
	}
	std::copy(q, s + slen, out); // std::cout << q;
	std::cout << std::endl;
}
