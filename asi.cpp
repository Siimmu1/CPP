#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> a{2, 7, 1, 8, 2, 8};
    
    std::sort(a.begin(), a.end());
    const auto end = std::unique(a.begin(), a.end());
    
    std::cout << "Unikaalsed:";
    std::for_each(a.begin(), end,
        [](int n){std::cout << " " << n;});
    
    std::cout << "Tagurpidi: ";
    std::reverse(a.begin(), a.end());
    for(const auto &num : a) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
}