#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cout<<"Enter the number whose parity you want to find\n";
    int number;
    cin>>number;
    int nosOfBits = log2(number)+1;
    int oneBits = 0;
    for(int i = 0; i < nosOfBits; i++){
        int powerValue = pow(2, nosOfBits - i);
        if(powerValue < number){
            number -= powerValue;
            oneBits++;
        }
        if(number == 0){
            break;
        }
    }
    if(oneBits%2){
        cout<<"The number is of Parity 0";
    } else {
        cout<<"The number is of Parity 1";
    }
}
