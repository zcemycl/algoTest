#include "bestTime2BuyAndSellStock.h"

int bestTime2BuyAndSellStock::naive(vector<int>& prices){
    int minVal = prices[0];
    int maxReturn = 0;
    for (int i=1;i<prices.size();i++){
        if (prices[i]-minVal>maxReturn)
            maxReturn = prices[i]-minVal;
        if (prices[i]<minVal)
            minVal = prices[i];
    }
    return maxReturn;
}
