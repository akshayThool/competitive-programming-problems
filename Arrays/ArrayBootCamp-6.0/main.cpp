#include "arrayBootCamp.h"
#include<algorithm>

#define endl "\n"



int main(){
    vector<int> a_ptr;
    fillVectorWithRandom(&a_ptr, 100, 0, 100);
    displayArray(&a_ptr);
    testVectorForEvenOdd(&a_ptr);
    evenOddBook(&a_ptr);
    displayArray(&a_ptr);
    testVectorForEvenOdd(&a_ptr);

    //Creating Sub Array from given array

    vector<int> a_ptr_subarray(a_ptr.begin(), a_ptr.begin()+10);
    displayArray(&a_ptr_subarray);

    //Sort Array
    sort(a_ptr.begin(), a_ptr.end());
    displayArray(&a_ptr);

    //binary Search
    bool value = binary_search(a_ptr.begin(), a_ptr.end(), 60);
    cout<<value<<endl;

    //upper bound
    auto upper = upper_bound(a_ptr.begin(), a_ptr.end(), 60);
    cout<<"Upper bound for value 60 found at "<<(upper - a_ptr.begin())<<" position with value "<<(*upper)<<"\n";

    //lower bound
    auto lower = lower_bound(a_ptr.begin(), a_ptr.end(), 60);
    cout<<"Lower bound for value 60 found at "<<(lower - a_ptr.begin())<<" position with value "<<(*lower)<<"\n";

    //min-element
    auto min = min_element(a_ptr.begin(), a_ptr.end());
    cout<<"Min element in the array is "<<(*min)<<endl;

    //max-element
    auto max = max_element(a_ptr.begin(), a_ptr.end());
    cout<<"Max element in the array is "<<(*max)<<endl;
}
