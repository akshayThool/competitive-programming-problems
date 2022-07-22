#include "stocks.h"

int maximum(int a, int b){
    return a > b ? a: b;
}

/**
 * @brief mostProfitBF
 * @param stockRates
 * @return
 */
int mostProfitBF(vector<int> stockRates){
    int maxProfit = INT_MIN, vectorSize = stockRates.size();
    for(int i = 0; i < vectorSize; i++){
        for(int j = i; j < vectorSize; j++){
            if(maxProfit < (stockRates[j] - stockRates[i])){
                maxProfit = stockRates[j] - stockRates[i];
            }
        }
    }
    return maxProfit;
}

int mostProfitOn(vector<int>* stockRates){
    vector<int> &s = *stockRates;
    int minStockTillNow = INT_MAX, maxProfit = INT_MIN;
    for(int i = 0; i < s.size(); i++){
        if(minStockTillNow > s[i]){
            minStockTillNow = s[i];
        }
        maxProfit = maximum(maxProfit, s[i] - minStockTillNow);
    }
    return maxProfit;
}

int longestEqualSubarray(vector<int>* stockRates){
    vector<int> &ACopy = *stockRates;
    int maxLength = INT_MIN, previousValue = ACopy[0], currentCount = 0;
    for(int i = 0; i < ACopy.size(); i++){
        if(ACopy[i] == previousValue){
            maxLength = maximum(++currentCount, maxLength);
        } else {
            previousValue = ACopy[i];
            currentCount = 1;
        }
    }
    return maxLength;
}
