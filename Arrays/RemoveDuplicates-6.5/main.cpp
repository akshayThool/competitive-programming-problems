#include "RemoveDupes.h"

int main(){
    vector<int> A = {2,3,5,5,7,11,11,11,13};
    displayVector(A);
    removeInteger(&A, 5);
    displayVector(A);
}
