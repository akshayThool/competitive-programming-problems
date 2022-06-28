#include<iostream>
#include<vector>

using namespace std;

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

void displayArray(vector<int>* A_ptr){
    for(int i : (*A_ptr)){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> a_ptr = {1, 2, 3, 4, 5};
    displayArray(&a_ptr);
    evenOddBF(&a_ptr); //O(n) time complexity & space complexity
    displayArray(&a_ptr);
}
