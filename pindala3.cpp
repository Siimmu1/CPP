#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int x1, y1, x2, y2, x3, y3;
    float A, B, C, s, pindala;
    cout << "Sisesta punkti koordinaadid: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    A = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    B = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    C = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));

    s = (A + B + C) / 2;
    pindala = sqrt(s*(s - A)*(s - B)*(s - C));

    cout << "Pindala on: " << pindala << " pindala yhikut.";
}
 