#include "arrayBootCamp.h"



int main(){
    vector<int> a_ptr;
    fillVectorWithRandom(&a_ptr, 100, 0, 100);
    displayArray(&a_ptr);
    evenOddBook(&a_ptr);
    displayArray(&a_ptr);
}
