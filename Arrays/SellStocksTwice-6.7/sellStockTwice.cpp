#include "sellStockTwice.h"

void displayStocks(vector<int>* stockRates){
    for(int a: (*stockRates)){
        cout<<a<<" ";
    }
    cout<<"\n";
}

double mostProfitTwice(vector<int> *stockRates){
    displayStocks(stockRates);
    cout<<"Calculating Max Profit of the given vector by selling twice\n";
    //todo
    return 0;
}
