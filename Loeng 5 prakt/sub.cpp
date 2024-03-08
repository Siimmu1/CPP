#include <iostream>

using namespace std;

int sub(int a, int b) {
    int count = 0;   
    while (a > 0) {
        a -= b;
        count++;
    }
    return count;

}