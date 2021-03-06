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

unsigned subtractOne(unsigned a){
    return addRecursion((a << 1), ~a);
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
unsigned multiplyBF(unsigned a, unsigned b){
    unsigned sum = 0;
    while(a){
        sum = addRecursion(sum, b);
        a = subtractOne(a);
    }
    return sum;
}

unsigned multiplyShift(unsigned a, unsigned b){
    unsigned sum = 0, i = 0;
    while(a){
        if(a & 0x1){
            sum = addRecursion(sum, b << i);
        }
        a >>= 1;
        i = addRecursion(i, 1);
    }
    return sum;
}
