#include <iostream>
#include <cmath>

int main(){
    int a, b;
    std::cout << "Sisesta kaateti pikkused:";
    std::cin >> a >> b;
    std::cout << "Pindala = " << float(a * b) / 2 << " pindala yhikut." << std::endl;
} 