#include<iostream>
#include "reverse_bits.h"
#include "swap_bits.h"

using namespace std;
using namespace std::chrono;

unsigned long long reverseBitsBruteForce(unsigned long long number, int nosOfBits){
    for(int i = 0; i < (nosOfBits/2); i++){
        number = swapBitsBookMethod(number, i, nosOfBits - i - 1);
    }
    return number;
}

unsigned long long changeTo64bits(int number, int nosOfLeftShits){
    return ((unsigned long long)number) << nosOfLeftShits ;
}

unsigned long long reverseBitsCacheMethod(unsigned long long number){
    unsigned int reverseBitCache[65536];
    auto startTime = high_resolution_clock::now();
    for(int i = 0; i < 65536; i++){
        reverseBitCache[i] = reverseBitsBruteForce(i, 16);
    }
    auto endTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(endTime - startTime);
    cout<<"Time taken to create look up table "<<duration.count()<<"\n";
    int bitmask = (1 << 17) - 1;
    return changeTo64bits(reverseBitCache[number & bitmask], 48) | changeTo64bits(reverseBitCache[(number >> 16) & bitmask], 32)
           | (reverseBitCache[(number >> 32) & bitmask] << 16) | reverseBitCache[(number >> 48) & bitmask];
}
