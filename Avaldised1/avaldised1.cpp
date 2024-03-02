#include <iostream>

using namespace std;

int main() {
    int a;
    (((a % 400) == 0) || (((a % 100) != 0) && ((a % 4) == 0)));
    cout << a << endl;
}
// Tyybid;
// 1) int % int -> int
// 2) int == int -> bool, int != int -> bool
// 3) bool && bool -> bool
// 4) bool || bool -> bool