#include<iostream>
#include "swap_bits.h"

using namespace std;

long long swapBitsBruteForce(long long number, int i, int j){
    long long ithMask = 1 << i;
    long long jthMask = 1 << j;
    bool ithbit = false, jthbit = false;
    if(number & ithMask){
        ithbit = true;
    }
    if(number & jthMask){
        jthbit = true;
    }
    if(ithbit == jthbit){
        return number;
    }
    if(ithbit){
        number &= ~(1 << i);
        number |= (1 << j);
    } else {
        number &= ~(1 << j);
        number |= (1 << i);
    }

    return number;
}


long long swapBitsBookMethod(long long number, int i, int j){
    if(((number >> i)& 1) != ((number >> j)& 1)){
        return number ^ (1 << i) ^ (1 << j);
    }
    return number;
}


unsigned long long swapBitsBruteForce(unsigned long long number, int i, int j){
    unsigned long long ithMask = 1 << i;
    unsigned long long jthMask = 1 << j;
    bool ithbit = false, jthbit = false;
    if(number & ithMask){
        ithbit = true;
    }
    if(number & jthMask){
        jthbit = true;
    }
    if(ithbit == jthbit){
        return number;
    }
    if(ithbit){
        number &= ~(1 << i);
        number |= (1 << j);
    } else {
        number &= ~(1 << j);
        number |= (1 << i);
    }

    return number;
}


unsigned long long swapBitsBookMethod(unsigned long long number, int i, int j){
    if(((number >> i)& 1) != ((number >> j)& 1)){
        return number ^ (1 << i) ^ (1 << j);
    }
    return number;
}
