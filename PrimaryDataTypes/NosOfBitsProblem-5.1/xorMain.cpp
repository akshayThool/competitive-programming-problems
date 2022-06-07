#include<iostream>
#include "brute-force.h"
#include<chrono>

using namespace std;
using namespace chrono;

int parityCheckByXOR(unsigned long long number){
    int nosOfBits = 32;
    do{
        number ^= (number >> nosOfBits);
         nosOfBits >>= 1;
    }while(nosOfBits);
    return number & 1;
}

int main(){
    long long numberOne = 562949953421311;
    unsigned long long numberTwo = 562949953421311;

    cout<<lowestBitMethod(numberOne)<<"\n";
    cout<<parityCheckByXOR(numberTwo);
}
