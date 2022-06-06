#include "brute-force.h"
#include<iostream>
#include<cmath>

using namespace std;

int main(){

   int totalBits = 64;
   int lookUpBits = 16;
   int sizeOfParityArray = pow(2, lookUpBits);
   int numberOfLookUps = totalBits/lookUpBits;
   int parityArray[sizeOfParityArray];

   for(int i = 0; i < sizeOfParityArray; i++){
       parityArray[i] = lowestBitMethod(i);
   }

   long long number = 150119987579016;
   long long bitmask = sizeOfParityArray - 1;
   int parity = 0;

   for(int i = 0; i < numberOfLookUps; i++){
       int lookUpNumber = number & bitmask;
       if(parityArray[lookUpNumber]){
           parity ^= 1;
       }
       number >>= lookUpBits;
   }

   cout<<"Parity is "<<parity<<endl;

}
