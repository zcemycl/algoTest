using System;
using Xunit;
using Sample.OrderStats;

namespace Sample.Tests{
    public class UnitTest_OrderStats{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,orderStats.naive(n));
        }
    }
}
