#include <iostream>
#include <cstring>

constexpr int maxs = 1000;
constexpr int maxt = 10;
constexpr int maxu = 10;
constexpr int maxr = maxs * maxu;

int main() {
	char s[maxs + 1], t[maxt + 1], u[maxu + 1];
	std::cin >> s >> t >> u; // ohtlik

	char r[maxr + 1];
	std::strcpy(r, s);
	auto rlen = std::strlen(r);
	const auto tlen = std::strlen(t), ulen = std::strlen(u);
	auto q = r, p = strstr(q, t);
	while (p != nullptr) {
		std::memmove(p + ulen, p + tlen, rlen - (p - r) - tlen + 1);
		std::memcpy(p, u, ulen);
		rlen = rlen - tlen + ulen;
		q = p + ulen; p = std::strstr(q, t);
	}
	std::cout << r << std::endl;
}
