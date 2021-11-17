using System;
using System.Collections.Generic;

namespace Sample.BestTime2BuyAndSellStock{
    public class bestTime2BuyAndSellStock{
        public static int naive(int[] prices){
            int minVal = prices[0];
            int maxReturn = 0;
            for (int i=1;i<prices.Length;i++){
                if (prices[i]-minVal > maxReturn)
                    maxReturn = prices[i]-minVal;
                if (prices[i]<minVal) minVal = prices[i];
            }
            return maxReturn;
        }
    }
}
