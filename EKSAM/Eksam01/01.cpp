#include <iostream>
#include <vector>

int main() {
    int Ai;
    std::cin >> Ai;

    if (Ai > 100 || Ai < 1) {
        std::cout << "Liiga suur/vaike arv" << std::endl;
    }
    else { 
        std::vector <int> vec(Ai);
        for (int i = 0; i < Ai; ++i) {
            std::cin >> vec[i];
        }
        
        for (int i = 0; i < Ai; ++i) {
        int count = 0;
        for (int j = 0; j < i; ++j) {
            if (vec[j] > vec[i]) {
                ++count;
            }
        }
        std::cout << count << " ";
    }
    std::cout << std::endl;
    };


}