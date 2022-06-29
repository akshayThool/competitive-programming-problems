#include<iostream>
#include<vector>

using namespace std;

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
 * @brief evenOddBF - Here brute force represents space complexity of O(n)
 * @param A_ptr - vector of int that is needed to arranged
 */
void evenOddBF(vector<int>* A_ptr){
    vector<int> temp;
    for(int i : (*A_ptr)){
        if((i&1) == 0){
            temp.push_back(i);
        }
    }
    for(int i : (*A_ptr)){
        if(i&1){
            temp.push_back(i);
        }
    }
    (*A_ptr).clear();
    (*A_ptr) = temp;
}

/**
 * @brief evenOdd - Effcient method with space complexity of O(1)
 * @param A_ptr - vector of int that is needed to arranged
 */
void evenOdd(vector<int>* A_ptr){
    auto front = 0;
    auto last = (*A_ptr).size() - 1;
    while(front < last){
        if(((*A_ptr)[front]&1) == 0){
            front++;
        } else {
            swap(A_ptr, front, last);
        }
        if((*A_ptr)[last]&1){
            last--;
        } else {
             swap(A_ptr, front, last);
        }
    }
}

/**
 * @brief evenOddBook - Method mentioned in Book
 * @param A_ptr - vector of int that is needed to arranged
 */
void evenOddBook(vector<int>* A_ptr){
    vector<int>& A = *A_ptr;
    int next_even = 0, next_odd = A.size() - 1;
    while(next_even < next_odd){
        if((A[next_even]&1) == 0){
            next_even++;
        } else {
            swap(A_ptr, next_even, next_odd--);
        }
    }
}

void displayArray(vector<int>* A_ptr){
    for(int i : (*A_ptr)){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> a_ptr = {1, 2, 3, 4, 5};
    displayArray(&a_ptr);
    evenOddBook(&a_ptr); //O(n) time complexity & space complexity
    displayArray(&a_ptr);
}
