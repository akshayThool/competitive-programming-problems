#include "brute-force.h"
#include<iostream>
#include<cmath>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main(){

   int totalBits = 64;
   int lookUpBits = 16;
   int sizeOfParityArray = pow(2, lookUpBits);
   int numberOfLookUps = totalBits/lookUpBits;
   int parityArray[sizeOfParityArray];

    auto startTime = high_resolution_clock::now();
   for(int i = 0; i < sizeOfParityArray; i++){
       parityArray[i] = lowestBitMethod(i);
   }
    auto endTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(endTime - startTime);

    cout<<"Total time to create look up table "<<duration.count()<<"\n";

   long long number = 562949953421311;
   long long bitmask = sizeOfParityArray - 1;
   int parity = 0;
    startTime = high_resolution_clock::now();
   for(int i = 0; i < numberOfLookUps; i++){
       int lookUpNumber = number & bitmask;
       if(parityArray[lookUpNumber]){
           parity ^= 1;
       }
       number >>= lookUpBits;
   }
endTime = high_resolution_clock::now();
duration = duration_cast<microseconds>(endTime - startTime);


   cout<<"Parity is "<<parity<<" and time taken is "<<duration.count()<<"\n";

}
