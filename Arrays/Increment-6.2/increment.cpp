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

string bitAddition(string bS, string bT){
    int i = bS.size() - 1, j = bT.size() - 1, carry = 0, result, bS1, bT1;
    int maxSize = i > j? i : j;
    string resultStr(maxSize+1, '0');
    while( maxSize >=0){
        if(i < 0){
            bS1 = 0;
        } else {
            bS1 = bS[i] - '0';
        }


        if(j < 0){
            bT1 = 0;
        } else {
            bT1 = bT[j] - '0';
        }
        result = (bS1 ^ bT1 ^ carry);
        char bufferResult = (char)(48 + result);
        resultStr[maxSize--] = bufferResult;
        carry = (bS1&bT1) | (bS1&carry) | (bT1&carry);
        j--; i--;
    }
    if(carry){
        resultStr = "1"+resultStr;
    }
    return resultStr;
}
