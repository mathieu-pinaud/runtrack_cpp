#include <iostream>

bool isEven(unsigned int n) {
    bool even = true;
    while (n) {
        even = !even;
        n &= n-1;
    }
    return even;
}