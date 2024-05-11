#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::vector<int> b(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    std::vector<int> diff;
    diff.reserve(n);

    int i = 0, j = 0;
    while (i < n && j < n) {
        if (a[i] < b[j]) {
            diff.push_back(a[i]);
            ++i;
        }
        else if (a[i] > b[j]) {
            ++j;
        }
        else {
            ++i;
            ++j;
        }
    }

    for (; i < n; ++i) {
        diff.push_back(a[i]);
    }

    if (diff.empty()) {
        std::cout << "pole";
    }
    else {
        for (int num : diff) {
            std::cout << num << " ";
        }
    }
}