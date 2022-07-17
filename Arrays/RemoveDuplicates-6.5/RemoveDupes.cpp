#include "RemoveDupes.h"

/**
 * @brief removeDuplicatesOn - Removing Duplicates from array with O(n) space complexity
 * @param A
 */
void removeDuplicatesOn(vector<int>* A){
    //Removing Duplicates from Vector
    cout<<"Removing Duplicates\n";
    vector<int> newA((*A).size(), 0);
    int previousNumber = (*A)[0];
    newA[0] = previousNumber;

    for(int i = 1, j = 1; i < (*A).size();i++){
        if((*A)[i] != previousNumber){
            newA[j] = (*A)[i];
            previousNumber = (*A)[i];
            j++;
        }
    }

    (*A) = newA;
}

void displayVector(vector<int> A){
    for(int a : A){
        cout<<a<<" ";
    }
    cout<<"\n";
}
