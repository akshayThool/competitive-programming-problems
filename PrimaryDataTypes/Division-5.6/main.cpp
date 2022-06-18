#include<iostream>
#include "bitCalc.h"

using namespace std;

int main(){
    // Number 4294967295 represents Binary Number 11111111111111111111111111111111
     cout<<divisionBF(4294967295, 1)<<"\n";
    cout<<division2k(4294967295, 1)<<"\n";
    cout<<divisionLargestFirst(4294967295, 1)<<"\n";
}
