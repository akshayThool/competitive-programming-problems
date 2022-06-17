#include "bitCalc.h"

unsigned findIthValue(unsigned dividend, unsigned divisor){
    unsigned i = 0;
    while((divisor << i) <= dividend){
        i++;
    }
    return i-1;
}

unsigned divisionBF(unsigned dividend, unsigned divisor){
    unsigned qoutient = 0;
    while(divisor <= dividend){
        dividend -= divisor;
        qoutient++;
    }
    return qoutient;
}

unsigned division2k(unsigned dividend, unsigned divisor){
    unsigned qoutient = 0;
    while(divisor <= dividend){
        unsigned i = findIthValue(dividend, divisor);
        dividend -= (divisor << i);
        qoutient += (1 << i);
    }
    return qoutient;
}
