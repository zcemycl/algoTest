using System;
using Xunit;
using Sample.BestTime2BuyAndSellStock2;

namespace Sample.Tests{
    public class UnitTest_BestTime2BuyAndSellStock2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,bestTime2BuyAndSellStock2.naive(n));
        }
    }
}
