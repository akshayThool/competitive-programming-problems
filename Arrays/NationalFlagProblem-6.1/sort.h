#ifndef SORT_H
#define SORT_H
#include<iostream>
#include<vector>
#include<random>

using namespace std;

typedef enum {BLUE, WHITE, RED} Color;

void quickSort(vector<int>* A, int lowerIndex, int upperIndex);
void fillVectorWithRandom(vector<int>* A_ptr, unsigned size, int lowerBound, int upperBound);
void displayVector(vector<int>* A_ptr);
void displayVector(vector<Color>* A_ptr);
void dutchNationalFlagProblem(vector<int>* A, unsigned index);
void dutchNationalFlagProblemSC(vector<int>* A, unsigned index);
void dutchNationalFlagProblemN2(vector<int>* A, unsigned index);
void dutchNationalFlagProblemN(vector<int>* A, unsigned index);
void dutchNationalFlagProblemSP(vector<int>* A, unsigned index);
void dutchNationalFlagProblemVariant1(vector<Color>* A);


#endif // SORT_H
