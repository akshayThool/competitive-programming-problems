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
