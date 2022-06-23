#include "palindrome.h"
#include<cmath>

bool isPalindrome(int inputNumber){
    if(inputNumber < 0 || inputNumber == 0){
        return false;
    }
    string inputStr = to_string(inputNumber);
    string revStr = reverseString(inputStr);
    if(inputStr == revStr)
        return true;
    return false;
}

bool isPalindromeStr(int inputNumber){
    if(inputNumber < 0 || inputNumber == 0){
        return false;
    }
    string inputStr = to_string(inputNumber);
    unsigned length = inputStr.length();
    for(int i = 0; i < length/2; i++){
        if(inputStr[i] != inputStr[length - i - 1]){
            return false;
        }
    }
    return true;
}

unsigned getDigitAtLoc(int inputNumber, unsigned loc){
    unsigned digitMask = pow(10, loc);
    return (inputNumber%(digitMask*10))/digitMask;
}

bool isPalindromeDec(int inputNumber){
    if(inputNumber < 0){
        return false;
    } else if (inputNumber == 0){
        return true;
    }
    unsigned nosOfDigits = log10(inputNumber)+1;
    for(int i = 0 ; i < nosOfDigits; i++){
        if(getDigitAtLoc(inputNumber, nosOfDigits - 1) != getDigitAtLoc(inputNumber, i)){
            return false;
        }
        nosOfDigits--;
    }
    return true;
}

bool isPalindromeBook(int inputNumber){
    if(inputNumber < 0){
        return false;
    } else if (inputNumber == 0){
        return true;
    }

    const unsigned num_digits = static_cast<int>(floor(log10(inputNumber))) + 1;
    int msdMask = pow(10, num_digits - 1);
    for(int i = 0; i < (num_digits/2); i++){
        if(inputNumber/msdMask != inputNumber%10){
            return false;
        }
        inputNumber %= msdMask;
        inputNumber /= 10;
        msdMask /=100;
    }
    return true;
}
