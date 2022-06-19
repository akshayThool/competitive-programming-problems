#include "bitCalc.h"

double exponentBF(double number, unsigned exponent){
    cout<<"Received number "<<number<<" with exponent "<<exponent<<"\n";
    unsigned nosOfIteration = 0;
    double result = 1.0;
    if(exponent < 0){
        exponent = -exponent;
        number = 1/number;
    }
    for(int i = 0; i < exponent; i++) {
        result *= number;
        nosOfIteration++;
    }
    cout<<"Nos of Iteration in brute force "<<nosOfIteration<<"\n";
    return result;
}

double exponentON(double number, unsigned exponent){
    cout<<"Received number "<<number<<" with exponent "<<exponent<<"\n";
    unsigned nosOfIteration = 0;
    double result = 1.0;
    if(exponent < 0){
        exponent = -exponent;
        number = 1/number;
    }

    while(exponent){
        if(exponent & 0x1){
            result *= number;
        }
        number *= number;
        exponent >>= 1;
        nosOfIteration++;
    }
    cout<<"Nos of Iteration in brute force "<<nosOfIteration<<"\n";
    return result;
}
