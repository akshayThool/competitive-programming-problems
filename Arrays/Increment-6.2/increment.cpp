#include "increment.h"

void displayVector(vector<int> A){
    for(int a : A){
        cout<<a;
    }
    cout<<"\n";
}

void incrementVector(vector<int>* A){
    ++(*A).back();
    for(int i = (*A).size() - 1; i > 0 && (*A)[i] == 10; i--){
        (*A)[i] = 0;
        (*A)[i - 1]++;
    }
    if((*A)[0] == 10){
        (*A)[0] = 0;
        (*A).insert((*A).begin(), 1);
    }
}
