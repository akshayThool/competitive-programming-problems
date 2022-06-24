#include "randomNbr.h"

unsigned getRandBinary(){
    srand(time(NULL));
    int randomNbr = rand();
    return (randomNbr % 2);
}

int getRandomNbr(int lowerBound, int upperBound){
    unsigned range = abs(upperBound - lowerBound + 1);
    int result;
    do {
        result = 0;
        for( int i = 0; (1 << i) < range; i++){
            result = (result << 1) | getRandBinary();
        }
    } while(result >= range);
    return result + lowerBound;
}
