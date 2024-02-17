#include <iostream>
#include <cmath>
#define ERROR_MARGIN 0.00001f

using namespace std;

int main() {
    double a, b, c, D;
    float x, x1, x2;
    
    cin >> a >> b >> c;
    D = b*b - 4*a*c;
    x1 = (-b - sqrt(D)) / (2*a);
    x2 = (-b + sqrt(D)) / (2*a);

    if (a == 0) {
    
        if (b != 0) {
            cout << "1" << endl;
            cout << -c / b << endl;  
        } 
        
        else if (c == 0) {
            cout << "INF" << endl;   
        } 
        
        else {
            cout << "0" << endl;    
        }
    }

    else if (abs(D) < ERROR_MARGIN) {
        cout << "1" << endl;
        cout << x1 << endl;
    }

    else if (D < 0) {
        cout << "0" << endl;
    }

    else if (D > 0) {

        if (x1 < x2) {
            cout << "2" << endl;
            cout << x1 << endl;
            cout << x2 << endl;
        }
        else if (x1 > x2) {
            cout << "2" << endl;
            cout << x2 << endl;
            cout << x1 << endl;
        }
                  
    }
}