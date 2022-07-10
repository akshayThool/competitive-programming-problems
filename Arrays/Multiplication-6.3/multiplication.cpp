#include "multiplication.h"

void displayVector(vector<int> vec){
    for(int a: vec){
        cout<<a;
    }
    cout<<"\n";
}

vector<int> multiply(vector<int> num1, vector<int> num2){
    int sign = num1.front() < 0 ^ num2.front() < 0 ? -1 : 1;
    num1.front() = abs(num1.front());
    num2.front() = abs(num2.front());

    vector<int> result(num1.size()+num2.size(), 0);

    for(int i = num1.size() - 1; i >=0; i--){
        for(int j = num2.size() - 1; j >= 0; j--){
            result[i+j+1] += num1[i]*num2[j];
            result[i+j] += result[i+j+1]/10;
            result[i+j+1] = result[i+j+1]%10;
        }
    }

    result = vector<int>{find_if_not(result.begin(), result.end(), [](int a){
        return !a;
    }), result.end()};

    if(result.empty()){
        return {0};
    }

    result.front() = sign*result.front();

    return result;
}
