#include<iostream>
#include "bitCalc.h"

using namespace std;

unsigned addRecursion(unsigned a, unsigned b){
    unsigned carry = (a & b) << 1;

    unsigned sum = a ^ b;

    if(carry == 0)
        return sum;
    return addRecursion(carry, sum);
}

unsigned addBook(unsigned a, unsigned b){
    unsigned carryIn = 0;
    unsigned temp_a = a, temp_b = b, sum = 0;
    unsigned bitmask = 1;
    while(temp_a || temp_b){
        unsigned ak = a & bitmask;
        unsigned bk = b & bitmask;
        unsigned carryOut = (ak & bk) | (ak & carryIn) | (bk & carryIn);
        sum |= ak ^ bk ^ carryIn;
        carryIn = carryOut << 1;
        bitmask <<= 1;
        temp_a >>= 1;
        temp_b >>= 1;
    }
    return sum | carryIn;
}
unsigned multiplyBF(unsigned a, unsigned b);
