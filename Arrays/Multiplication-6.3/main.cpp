#include "multiplication.h"

using namespace std;

int main(){

    vector<int> num1 = {1, 9, 3, 7, 0, 7, 7, 2, 1};
    vector<int> num2 = {-7, 6, 1, 8, 3, 8, 2, 5, 7, 2, 8, 7};
    vector<int> result = multiply(num1, num2);
    displayVector(result);
}
