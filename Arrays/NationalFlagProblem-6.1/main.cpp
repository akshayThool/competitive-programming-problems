#include "arrayNationalFlag.h"

using namespace std;

//template<size_t SIZE> void displayArray(array<int, SIZE>& A){
//    for(auto a: A){
//        cout<<a<<" ";
//    }
//    cout<<"\n";
//}

int main(){
    //understanding quick sort
//    vector<int> a = {26, 25, 45, 49, 24, 33, 46, 32, 23, 39};
//    fillVectorWithRandom(&a, 10, 20, 50);
//    displayVector(&a);
//    quickSort(&a, 0, a.size()-1);
//    displayVector(&a);

//    vector<int> b = {2, 8, 7, 4, 3, 4, 6, 4};

//    cout<<"The Dutch National Flag Problem\n";
//    displayVector(&b);
//    dutchNationalFlagProblemSP(&b, 7);
//    displayVector(&b);

//    vector<Color> b = {BLUE, WHITE, RED, WHITE, BLUE, WHITE, RED, BLUE};
//    displayVector(&b);
//    dutchNationalFlagProblemVariant1(&b);
//    displayVector(&b);

//        vector<Color> b = {BLUE, BLACK, BLACK, RED, RED, BLACK, RED, BLUE, BLACK, WHITE, RED, BLUE, WHITE, BLUE};
//        displayVector(&b);
//        dutchNationalFlagProblemVariant2(&b);
//        displayVector(&b);

    vector<bool> b = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0};
//    displayVector(&b);
//    dutchNationalFlagProblemVariant3(&b);
//    displayVector(&b);

    vector<CompoundObject> b_compound;
    unsigned i = 0;
    char iter = 'a';
    while(i < b.size()){
        b_compound.push_back(CompoundObject());
        b_compound[i].isAvailable = b[i];
        b_compound[i].value = iter;
        i++;
        iter++;
    }
    displayVector(&b_compound);
    dutchNationalFlagProblemVariant4(&b_compound);
    displayVector(&b_compound);
//    array<int, 5> a = {1, 2, 3, 4, 5};
//    displayArray(a);
//    swap(a, 0, 3);
//    displayArray(a);
}
