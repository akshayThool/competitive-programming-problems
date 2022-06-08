#include<iostream>

using namespace std;

long long swapbits(long long number, int i, int j){
    if(((number >> i)& 1) != ((number >> j)& 1)){
        return number ^ (1 << i) ^ (1 << j);
    }
    return number;
}

int main(){
    cout<<swapbits(11, 0, 2)<<"\n";
}
