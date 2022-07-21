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

void swap(vector<int>* A, int a, int b){
    int temp = (*A)[a];
    (*A)[a] = (*A)[b];
    (*A)[b] = temp;
}

/**
 * @brief removeDuplicatesO1 - Removing Duplicates from array with O(1) space complexity
 * @param A
 */
void removeDuplicatesO1(vector<int>* A){
    int previousNumber = (*A)[0];
    for(int i = 1, j = 1; i < (*A).size();i++){
        if((*A)[i] == previousNumber){
            (*A)[i] = 0;
        } else {
            previousNumber = (*A)[i];
        }
    }

    int nonZeroIndex = 0, zeroIndex = 0;

    while(zeroIndex < (*A).size()){
        if((*A)[zeroIndex] == 0){
            zeroIndex++;
        } else {
            swap(A, zeroIndex++, nonZeroIndex++);
        }
    }
}

void removeInteger(vector<int>* A, int toBeRemoved){
    vector<int> &Acopy = *A;
    int writeIndex = 0;
    for(int i = 0; i < Acopy.size(); i++){
        if(Acopy[i] != toBeRemoved){
            Acopy[writeIndex++] = Acopy[i];
        }
    }
    for(int i = writeIndex; i < Acopy.size(); i++){
        Acopy[i] = 0;
    }
}

void removeDuplicateMore2(vector<int>* A){
    vector<int> &Acopy = *A;
    int writeIndex = 1, flag = 0;
    for(int i = 1; i < Acopy.size(); i++){
        if(Acopy[writeIndex - 1] != Acopy[i]){
            Acopy[writeIndex++] = Acopy[i];
            flag = 1;
        } else {
            if(flag){
                Acopy[writeIndex++] = Acopy[i];
                flag = 0;
            }
        }
    }
    for(int i = writeIndex; i < Acopy.size(); i++){
        Acopy[i] = 0;
    }
}

void removeDuplicateBook(vector<int>* A){
    vector<int> &Acopy = *A;

    int writeIndex = 1;
    for(int i = 1; i < Acopy.size(); i++){
        if(Acopy[writeIndex - 1] != Acopy[i]){
            Acopy[writeIndex++] = Acopy[i];
        }
    }
    for(int i = writeIndex; i < Acopy.size(); i++){
        Acopy[i] = 0;
    }
}

void displayVector(vector<int> A){
    for(int a : A){
        cout<<a<<" ";
    }
    cout<<"\n";
}
