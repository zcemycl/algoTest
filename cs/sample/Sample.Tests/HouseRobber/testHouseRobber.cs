using System;
using Xunit;
using Sample.HouseRobber;

namespace Sample.Tests{
    public class UnitTest_HouseRobber{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,houseRobber.naive(n));
        }
    }
}
