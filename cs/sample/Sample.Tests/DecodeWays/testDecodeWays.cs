using System;
using Xunit;
using Sample.DecodeWays;

namespace Sample.Tests{
    public class UnitTest_DecodeWays{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,decodeWays.naive(n));
        }
    }
}
