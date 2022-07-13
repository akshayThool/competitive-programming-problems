#include "AdvancingArray.h"

int minimum(int a, int b){
    return a < b ? a : b;
}

bool isSolutionPossible(vector<int> A){

    if(!A.front()){
        return false;
    }

    vector<int> checkMap(A.size(), 0);
    checkMap.front() = 1;

    for(int i = 0; i < A.size(); i++){
        if(checkMap[i]){
        int min = minimum(i+A[i], A.size()-1);
        for(int j = i+1; j <= min; j++){
            checkMap[j] = 1;
        }
        if(checkMap.back()){
            return true;
        }
        }
    }

    return false;
}
