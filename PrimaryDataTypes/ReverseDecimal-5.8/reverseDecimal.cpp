#include "reverseDecimal.h"

bool isNegative(int& inputNumber){
    if(inputNumber < 0){
        inputNumber = -inputNumber;
        return true;
    }
    return false;
}

int reverseDecimalBF(int inputNumber){
    bool isNeg = isNegative(inputNumber);
    string str = to_string(inputNumber);
    reverseStringWhile(str);
    inputNumber = stoi(str);
    return isNeg ? -inputNumber: inputNumber;
}

int reverseDecimalON(int inputNumber){
    int result = 0;
    bool isNeg = isNegative(inputNumber);
    while(inputNumber){
        int unitNumber = inputNumber%10;
        result = result * 10 + unitNumber;
        inputNumber = inputNumber/10;
    }
    return isNeg ? -result: result;
}
