#include<iostream>
#include<chrono>
#include<brute-force-bit-method.h>

using namespace std;
using namespace std::chrono;

void calculateTimeForFunction(long long number, string functionName, int (*func)(long long)){
    auto startTime = high_resolution_clock::now();
    if(func(number) == 0){
        cout<<"Test Passed for "<<functionName<<"\n";
    } else{
        cout<<"Test Passed for "<<functionName<<"\n";
    }
    auto endTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(endTime - startTime);
    cout<<"Time elapsed for function "<<functionName<<" "<<duration.count()<<" microseconds\n";
}

int main(){
    long long number = 1099511627775; //60 bit number

    calculateTimeForFunction(number, "normalFunction", &normalMethod);
    calculateTimeForFunction(number, "bitMaskMethod", &bitMaskMethod);
    calculateTimeForFunction(number, "rightShiftMethod", &rightShiftMethod);
    calculateTimeForFunction(number, "lowestBitMethod", &lowestBitMethod);



}
