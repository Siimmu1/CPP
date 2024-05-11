#include <iostream>
#include <vector>
#include <algorithm>

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

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    std::vector<int> diff;
    diff.reserve(a.size());

    std::set_difference(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(diff));

    std::cout;
    if (a != b) {
        for (int num : diff) {
            std::cout << num << " ";
        };
        std::cout << std::endl;
    }
    else {
        std::cout << "pole";
    }
}