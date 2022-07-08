#ifndef INCREMENT_H
#define INCREMENT_H
#include<iostream>
#include<vector>
#include<array>
#include<cmath>

using namespace std;

template<size_t SIZE> void displayArray(array<int, SIZE>& A){
    for(auto a: A){
        cout<<a;
    }
    cout<<"\n";
}

template<size_t SIZE> void incrementArrayNumberBF(array<int, SIZE>& A){
    long long numberGenerated = 0;
    for(int i = 0; i < A.size(); i++){
        numberGenerated = 10*numberGenerated + A[i];
    }
    numberGenerated++;
        long long initialPower = pow(10, A.size()-1);
        for(int i = 0; i < A.size(); i++){
            A[i] = numberGenerated/initialPower;
            numberGenerated %=initialPower;
            initialPower/=10;
        }
}

void incrementVector(vector<int>* A);
void displayVector(vector<int> A);

#endif // INCREMENT_H
