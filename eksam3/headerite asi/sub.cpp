#include "sub.h"

int count = 0;

int sub(int a, int b) {
    ++count;
    return a - b;
}