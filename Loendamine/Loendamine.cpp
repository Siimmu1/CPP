#include <vector>
#include <iostream>

int main() {
    int N, M;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }

    std::cin >> M;
    for (int j = 0; j < M; ++j) {
        int b;
        std::cin >> b;

        int count = 0;
        for (int num : a) {
            if (num == b) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}

