#include "bitCalc.h"

unsigned divisionBF(unsigned dividend, unsigned divisor){
    unsigned qoutient = 0;
    while(divisor <= dividend){
        dividend -= divisor;
        qoutient++;
    }
    return qoutient;
}
