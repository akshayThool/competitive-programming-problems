#include "stocks.h"

int main(){
    vector<int> stockRates = {1, 2, 3, 4, 4, 4, 5, 5, 6};
    cout<<longestEqualSubarray(&stockRates)<<"\n";
}
