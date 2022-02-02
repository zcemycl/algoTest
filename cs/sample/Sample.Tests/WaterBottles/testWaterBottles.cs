using System;
using Xunit;
using Sample.WaterBottles;

namespace Sample.Tests{
    public class UnitTest_WaterBottles{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,waterBottles.naive(n));
        }
    }
}
