#include <iostream>
#include <cstring>

constexpr int maxs = 1000;
constexpr int maxt = 10;
constexpr int maxu = 10;
constexpr int maxr = maxs * maxu;

int main() {
	char s[maxs + 1], t[maxt + 1], u[maxu + 1];
	std::cin.getline(s, sizeof(s));
	std::cin.getline(t, sizeof(t));
	std::cin.getline(u, sizeof(u));
	const auto tlen = std::strlen(t);

	char r[maxr + 1] = "";
	auto q = s, p = std::strstr(q, t);
	while (p != nullptr) {
		std::strncat(r, q, p - q);
		std::strcat(r, u);
		q = p + tlen; p = std::strstr(q, t);
	}
	std::strcat(r, q);
	std::cout << r << std::endl;
}
