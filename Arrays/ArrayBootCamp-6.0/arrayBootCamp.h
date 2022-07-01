#ifndef ARRAYBOOTCAMP_H
#define ARRAYBOOTCAMP_H
#include<iostream>
#include<array>
#include<vector>
#include<random>

using namespace std;

void swap(vector<int>* A_ptr, int i, int j);
void evenOddBF(vector<int>* A_ptr);
void evenOdd(vector<int>* A_ptr);
void evenOddBook(vector<int>* A_ptr);
void displayArray(vector<int>* A_ptr);
void fillVectorWithRandom(vector<int>* A_ptr, unsigned size, int lowerBound, int upperBound);
void testVectorForEvenOdd(vector<int>* A_ptr);

#endif // ARRAYBOOTCAMP_H
