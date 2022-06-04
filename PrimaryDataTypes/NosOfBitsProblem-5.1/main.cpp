#include<iostream>
#include<brute-force-bit-method.h>

using namespace std;

int main(){
    if(bitMaskMethod(15) == 0 && bitMaskMethod(8) == 1){
        cout<<"Test Passed for bit Mask Method\n";
    } else{
        cout<<"Test Failed for bit mask method\n";
    }

    if(rightShiftMethod(15) == 0 && rightShiftMethod(8) == 1){
        cout<<"Test Passed for rightShiftMethod\n";
    } else{
        cout<<"Test Failed for rightShiftMethod\n";
    }

    if(lowestBitMethod(15) == 0 && lowestBitMethod(8) == 1){
        cout<<"Test Passed for lowestBitMethod\n";
    } else{
        cout<<"Test Failed for lowestBitMethod\n";
    }
}
