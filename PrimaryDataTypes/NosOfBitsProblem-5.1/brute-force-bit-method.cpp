#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cout<<"Enter the number whose parity you want to check\n";
    int number;
    cin>>number;

    int nosOfBits = log2(number)+1;
    int nosOfOneBits = 0;
    int parity = 0;

    for(int i = 0; i < nosOfBits; i++){
        if(number & (1 << (i))){
            parity = parity ^ 1;
        }
    }
    cout<<"Parity of the number is "<<parity<<"\n";
}
