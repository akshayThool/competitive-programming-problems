#include "bitCalc.h"

using namespace std;

unsigned findIthValue(unsigned dividend, unsigned divisor, unsigned* nosOfIteration){
    unsigned i = 0;
    while((static_cast<unsigned long long>(divisor) << i) <= dividend){
        i++;
        (*nosOfIteration)++;
    }
    return i-1;
}

unsigned divisionBF(unsigned dividend, unsigned divisor){
    unsigned qoutient = 0;
    unsigned nosOfIteration = 0;
    while(divisor <= dividend){
        dividend -= divisor;
        qoutient++;
        nosOfIteration++;
    }
    cout<<"Nos of Iteration Brute Force "<<nosOfIteration<<"\n";
    return qoutient;
}

unsigned division2k(unsigned dividend, unsigned divisor){
    unsigned qoutient = 0;
    unsigned nosOfIteration = 0;
    while(divisor <= dividend){
        unsigned i = findIthValue(dividend, divisor, &nosOfIteration);
        dividend -= (divisor << i);
        qoutient += (1 << i);
        nosOfIteration++;
    }
    cout<<"Nos of Iteration of division2k "<<nosOfIteration<<"\n";
    return qoutient;
}

unsigned divisionLargestFirst(unsigned dividend, unsigned divisor){
    unsigned qoutient = 0;
    unsigned power = 32;
    unsigned long long divisor_power = static_cast<unsigned long long>(divisor) << power;
    unsigned nosOfIteration = 0;
    while(divisor <= dividend){
        while(divisor_power > dividend){
            power--;
            divisor_power>>=1;
            nosOfIteration++;
        }
        dividend -= divisor_power;
        qoutient += (0x1 << power);
    }
    cout<<"Nos of Iteration DivisionLargestFirst "<<nosOfIteration<<"\n";
    return qoutient;
}
