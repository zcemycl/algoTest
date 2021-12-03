using System;
using Xunit;
using Sample.CoinChange;

namespace Sample.Tests{
    public class UnitTest_CoinChange{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,coinChange.naive(n));
        }
    }
}
