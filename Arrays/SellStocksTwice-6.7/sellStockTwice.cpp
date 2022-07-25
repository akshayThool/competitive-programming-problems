#include "sellStockTwice.h"

void displayStocks(vector<int>* stockRates){
    for(int a: (*stockRates)){
        cout<<a<<" ";
    }
    cout<<"\n";
}

int minimum(int a, int b){
    return (a > b)? b : a;
}

int maximum(int a, int b){
    return (a > b)? a : b;
}

double mostProfitTwice(vector<int> *stockRates){
    displayStocks(stockRates);
    cout<<"Calculating Max Profit of the given vector by selling twice\n";
    //todo
    vector<int> &stockRatesCopy = *stockRates;
    vector<int> sellOnceProfit(stockRatesCopy.size(), 0);
    int minimumSoFar = stockRatesCopy[0], maximumSoFar = stockRatesCopy.back();
    int maxProfit = INT_MIN;
    for(int i = 1; i < stockRatesCopy.size(); i++){
        if(minimumSoFar > stockRatesCopy[i]){
            minimumSoFar = stockRatesCopy[i];
        }
        maxProfit = maximum(maxProfit, stockRatesCopy[i] - minimumSoFar);
        sellOnceProfit[i] = maxProfit;
    }
    maxProfit = INT_MIN;
    for(int i = stockRatesCopy.size() - 1; i > 0; i--){
        if(maximumSoFar < stockRatesCopy[i]){
            maximumSoFar = stockRatesCopy[i];
        }
        maxProfit = maximum(maxProfit, maximumSoFar - stockRatesCopy[i] + sellOnceProfit[i-1]);
    }
    return maxProfit;
}

