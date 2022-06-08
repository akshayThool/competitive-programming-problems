#include<iostream>
#include "reverse_bits.h"
#include "swap_bits.h"

using namespace std;

unsigned long long reverseBitsBruteForce(unsigned long long number){
    int nosOfBits = 64;
    for(int i = 0; i < (nosOfBits/2); i++){
        number = swapBitsBookMethod(number, i, nosOfBits - i - 1);
    }
    return number;
}
