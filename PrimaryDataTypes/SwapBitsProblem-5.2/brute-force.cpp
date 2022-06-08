#include<iostream>

using namespace std;

long long swapBits(long long number, int i, int j){
    long long ithMask = 1 << i;
    long long jthMask = 1 << j;
    bool ithbit = false, jthbit = false;
    if(number & ithMask){
        ithbit = true;
    }
    if(number & jthMask){
        jthbit = true;
    }
    if(ithbit == jthbit){
        return number;
    }
    if(ithbit){
        number &= ~(1 << i);
        number |= (1 << j);
    } else {
        number &= ~(1 << j);
        number |= (1 << i);
    }

    return number;
}

int main(){
    cout<<swapBits(11, 0, 2)<<endl;
}
