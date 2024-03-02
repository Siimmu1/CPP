#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    a = 4;
    int & d = b;
    int & e = c;
    int & f = c;
    e = 5;
    std::cout << a + b + c + d + e + f << std::endl;
}
// Valjastab vaartuse 23
//