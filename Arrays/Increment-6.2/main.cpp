#include<iostream>
#include "increment.h"

using namespace std;

int main(){
    array<int, 4> a = {1, 2, 3, 4};
    displayArray(a);
    incrementArrayNumberBF(a);
    displayArray(a);

    vector<int> b = {9, 9, 9, 9};
    displayVector(b);
    incrementVector(&b);
    displayVector(b);
}
