#include<iostream>
#include<cmath>
#include "ClosSameNbr.h"

using namespace std;

int getWeight(unsigned long long number){
    int weight = 0;
    while(number){
        weight++;
        number &= (number - 1);
    }
    return weight;
}

int getTrailingZeros(unsigned long long number){
    int count = 0;
    if(number & 0x1){
        return count;
    } else {
        count = 1;
        if((number & 0xffffffff) == 0){
            count += 32;
            number >>=32;
        }
        if( (number & 0xffff) == 0){
            count += 16;
            number >>=16;
        }
        if( (number & 0xff) == 0){
            count += 8;
            number >>= 8;
        }
        if( (number & 0xf) == 0){
            count += 4;
            number >>=4;
        }
        if( (number & 0x3) == 0){
            count += 2;
            number >>=2;
        }
        count -= number & 0x1;
        return count;
    }
}

unsigned long long getClosestSameWeightNumberBF(unsigned long long number){
    int nosOfBits = log2(number);
    int numberWeight = getWeight(number);
    int maxDifference = pow(2, nosOfBits);
    for(int i = 1; i <= maxDifference; i++){
        if(numberWeight == getWeight(number+i))
        {
            return number + i;
        }
        if(numberWeight == getWeight(number - i)){
            return number - i;
        }
    }
    return 0ULL;
}

unsigned long long getClosestSameWeightNumberON(unsigned long long number){
    int nosOfBits = 64;
    for(int i = 0; i < nosOfBits; i++){
       if(((number >> i) & 1ULL) != ((number >>(i+1)) & 1ULL)){
           return number ^ (1ULL << i) ^ (1ULL << (i+1));
       }
    }
    return 0ULL;
}

unsigned long long getClosestSameWeightNumberOlN(unsigned long long number){
    unsigned long long vNumber = number | (number - 1);
    unsigned long long closestNumber = (vNumber + 1) | (((~vNumber & -~vNumber) - 1) >> (getTrailingZeros(number)+1));
    return closestNumber;

}
