#include<iostream>
#include<cmath>
#include<brute-force-bit-method.h>

using namespace std;

int bitMaskMethod(int number){
    int nosOfBits = log2(number)+1;
    int parity = 0;

    for(int i = 0; i < nosOfBits; i++){
        if(number & (1 << (i))){
            parity ^= 1;
        }
    }
    return parity;
}

int rightShiftMethod(int number){
    int parity = 0;
    while(number){
        parity ^= (number & 1);
        number >>= 1;
    }
    return parity;
}

int lowestBitMethod(int number){
    int parity = 0;
    while(number){
        parity ^= 1;
        number &= (number - 1);
    }
    return parity;
}

