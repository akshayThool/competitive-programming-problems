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
    int nosOfBits = 63;
    for(int i = 0; i <= nosOfBits; i++){
       if(((number >> i) & 1ULL) != ((number >>(i+1)) & 1ULL)){
           return number ^ (1ULL << i) ^ (1ULL << (i+1));
       }
    }
    return 0ULL;
}
