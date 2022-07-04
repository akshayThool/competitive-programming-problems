#include "sort.h"

using namespace std;

int main(){
    //understanding quick sort
    vector<int> a = {26, 25, 45, 49, 24, 33, 46, 32, 23, 39};
//    fillVectorWithRandom(&a, 10, 20, 50);
//    displayVector(&a);
//    quickSort(&a, 0, a.size()-1);
//    displayVector(&a);

    vector<int> b = {2, 8, 7, 4, 3, 4, 6, 4};

    cout<<"The Dutch National Flag Problem\n";
    displayVector(&b);
    dutchNationalFlagProblemSP(&b, 7);
    displayVector(&b);
    //ToDo
}
