#include<iostream>
#include<cmath>
#include<brute-force.h>

using namespace std;

int normalMethod(long long number ){
    int nosOfBits = log2(number)+1;
    int oneBits = 0;
    for(int i = 0; i <= nosOfBits; i++){
        long long powerValue = pow(2, nosOfBits - i);
        if(powerValue <= number){
            number -= powerValue;
            oneBits++;
        }
        if(number == 0){
            break;
        }
    }
   return oneBits%2;
}

int bitMaskMethod(long long number){
    int nosOfBits = log2(number)+1;
    int parity = 0;

    for(int i = 0; i < nosOfBits; i++){
        if(number & (1 << (i))){
            parity ^= 1;
        }
    }
    return parity;
}

int rightShiftMethod(long long number){
    long long parity = 0;
    while(number){
        parity ^= (number & 1);
        number >>= 1;
    }
    return parity;
}

int lowestBitMethod(long long number){
    long long parity = 0;
    while(number){
        parity ^= 1;
        number &= (number - 1);
    }
    return parity;
}

