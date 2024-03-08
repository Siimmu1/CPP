#include <vector>
#include <iostream>
#include "dotprod.cpp"

int main() {
    int N;
    std::cin >> N;

    std::vector<double> v1(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> v1[i];
    }

    std::vector<double> v2(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> v2[i];
    }

    
    for (int i = 0; i < N; ++i) {
        v1[i] = static_cast<double>(v1[i]);
        v2[i] = static_cast<double>(v2[i]);
    }

    std::cout << std::fixed << dotprod(v1, v2) << std::endl;
    return 0;
}
