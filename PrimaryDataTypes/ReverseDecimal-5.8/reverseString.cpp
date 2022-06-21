#include "reverseString.h"

string reverseString(string inputString){
    unsigned length = inputString.length();
    char revString[length];
    for( int i = 0; i < length; i++){
        revString[length - i - 1] = inputString[i];
    }
    revString[length] = '\0';
    return revString;
}

void reverseStringLoop(string& inputString){
    unsigned n = inputString.length();
    for(int i = 0; i < n/2; i++){
        char temp = inputString[i];
        inputString[i] = inputString[n - i - 1];
        inputString[n - i - 1] = temp;
    }
}

void reverseStringWhile(string& inputString){
    unsigned n = inputString.length();
    unsigned i = 0;
    while(i < n){
        char temp = inputString[i];
        inputString[i] = inputString[n - 1];
        inputString[n - 1] = temp;
        i++;
        n--;
    }
}
