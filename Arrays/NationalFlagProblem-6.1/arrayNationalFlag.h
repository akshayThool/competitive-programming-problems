#ifndef ARRAYNATIONALFLAG_H
#define ARRAYNATIONALFLAG_H
#include<iostream>
#include<random>
#include<array>
#include "sort.h"

template<typename T, size_t SIZE> void displayArray(array<T, SIZE>& A){
    for(auto a: A){
        cout<<a<<" ";
    }
    cout<<"\n";
}

template<typename T, size_t SIZE> void swap(array<T, SIZE>& A, int i, int j){
    T temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

#endif // ARRAYNATIONALFLAG_H
