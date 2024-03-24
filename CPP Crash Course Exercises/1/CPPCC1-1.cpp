#include <cstdio>
#include <cmath>

int absolute_value(int x) {
 // Your code here
    int absx;
    absx = abs(x);
    return absx;
}
int main() {
 int my_num = -10;
 printf("The absolute value of %d is %d.\n", my_num, 
 absolute_value(my_num));
}