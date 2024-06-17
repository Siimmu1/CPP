#include <iostream>
#include <vector>

int main() {
    int a, b, c, N;
    std::cin >> N;
    std::vector <int> v = {a, b, c};

    int count = 0;
    for (int i = 1; i <= N; ++i) {
        std::cin >> a >> b >> c;
        if ((a + b) / 2.0 > c) {
            ++count;
        }
    }

    std::cout << count << std::endl;
    return 0;
}