#include "sort.h"

/**
 * @brief Swap two elements of vector at position i and j
 * @param A_ptr - vector containing integer value
 * @param i - index
 * @param j - index
 */
void swap(vector<int>* A_ptr, int i, int j){
    int temp = (*A_ptr)[i];
    (*A_ptr)[i] = (*A_ptr)[j];
    (*A_ptr)[j] = temp;
}

/**
 * @brief partition - Partitions the vectors into two subArrays
 * @param A - Vector
 * @param lowerIndex - lowerIndex of the vector
 * @param upperIndex - upperIndex of the vector
 */
unsigned partition(vector<int>* A, int lowerIndex, int upperIndex){
    int x = (*A)[upperIndex];
    int i = lowerIndex - 1;
    for(int j = lowerIndex; j <= (upperIndex - 1); j++){
        if((*A)[j] <= x){
            i++;
            swap(A, i, j);
        }
    }
    swap(A, i+1, upperIndex);
    return i+1;
}

/**
 * @brief quickSort - Sorting the vector using the method of quickSort algorithm
 * @param A - Vector
 * @param lowerIndex - lowerIndex of the vector
 * @param upperIndex - upperIndex of the vector
 */
void quickSort(vector<int>* A, int lowerIndex, int upperIndex){
    if(lowerIndex < upperIndex) {
    int q = partition(A, lowerIndex, upperIndex);
    quickSort(A, lowerIndex, q - 1);
    quickSort(A, q+1, upperIndex);
    }
}

/**
 * @brief fillVectorWithRandom - Fills vector with random values
 * @param A_ptr - vector of int
 * @param size - number of integers to be added
 * @param lowerBound - lowerBound of the range
 * @param upperBound - upperBound of the range
 */
void fillVectorWithRandom(vector<int>* A_ptr, unsigned size, int lowerBound, int upperBound){
    random_device rd; //uniformly-distributed integer random number generator that produces non-deterministic random numbers. That is it obtains random number from the hardware.
    mt19937_64 gen(rd()); //Mersenne Twister Algorithm
    uniform_int_distribution<> distr(lowerBound, upperBound);
    for(int i = 0; i < size; i++){
        (*A_ptr).push_back(distr(gen));
    }
}

/**
 * @brief displayVector - Display the content of a vector
 * @param A_ptr
 */
void displayVector(vector<int>* A_ptr){
    for(int i : (*A_ptr)){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void dutchNationalFlagProblem(vector<int>* A, unsigned index){
    int x = (*A)[index], i = -1, vectorSize = (*A).size();
    for(int j = 0; j < vectorSize; j++)
    {
        if(j != index){
            if((*A)[j] > x){
                i++;
                swap(A, i, j);
                if(i == index){
                    i++;
                }
            }
        } else {
            j++;
        }
    }
    swap(A, i+1, index);
}

/**
 * @brief dutchNationalFlagProblemSC - Space Complexity of O(n) solution
 * @param A
 * @param index
 */
void dutchNationalFlagProblemSC(vector<int>* A, unsigned index){
    vector<int> temp;
    int pivot = (*A)[index];
    unsigned vectorSize = (*A).size();
    for(int i = 0; i < (vectorSize - 1); i++){
        if((*A)[i] < pivot){
            temp.push_back(((*A)[i]));
        }
    }
    for(int i = 0; i < (vectorSize - 1); i++){
        if((*A)[i] == pivot){
            temp.push_back(((*A)[i]));
        }
    }
    temp.push_back((*A)[index]);
    for(int i = 0; i < (vectorSize - 1); i++){
        if((*A)[i] > pivot){
            temp.push_back(((*A)[i]));
        }
    }

    (*A) = temp;
}

/**
 * @brief dutchNationalFlagProblemN2 - O(n^2) method to solve the dutch problem
 * @param A
 * @param index
 */
void dutchNationalFlagProblemN2(vector<int>* A, unsigned index){
    int pivot = (*A)[index], vectorSize = (*A).size();

    //First Pass
    for(int i = 0; i < vectorSize; i++){
        for(int j = i+1; j < vectorSize; j++) {
            if((*A)[j]<pivot) {
                swap(A, i, j);
            }
        }
    }

    //Second Pass
    for(int i = (vectorSize - 1); i >= 0 && (*A)[i] >= pivot; i--){
        for(int j = i-1; j >= 0 && (*A)[j] >= pivot; j--) {
            if((*A)[j]>pivot) {
                swap(A, i, j);
            }
        }
    }
}



