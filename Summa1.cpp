#include <iostream>

int main(){
    std::cout << "Vali 2 arvu:";

    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;

    std::cout << "Vali veel 2 arvu:";
    int d, g;
    std::cin >> d >> g;
    int f = d - g;
    std::cout << d << "+" << g << "=" << f << std::endl;
}