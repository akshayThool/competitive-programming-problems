#include "sellStockTwice.h"

int main(){
    cout<<"Sell And Buy Stocks Twice Max Profit Program\n";
    vector<int> stockRates = {12, 11, 13, 9, 12, 8, 14, 13, 15};
    double maxProfit = mostProfitTwice(&stockRates);
    cout<<"Max Profit Generated is "<<maxProfit<<"\n";
}
