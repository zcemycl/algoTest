using System;
using Xunit;
using Sample.BestTime2BuyAndSellStock;

namespace Sample.Tests{
    public class UnitTest_BestTime2BuyAndSellStock{
        [Theory]
        [InlineData(new int[]{7,1,5,3,6,4},5)]
        [InlineData(new int[]{7,6,4,3,1},0)]
        [InlineData(new int[]{2,4,1},2)]
        public void checkResult(int[] prices,int expected){
            Assert.Equal(expected,bestTime2BuyAndSellStock.naive(prices));
        }
    }
}
