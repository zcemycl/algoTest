using System;
using Xunit;
using Sample.TrapRain;

namespace Sample.Tests{
    public class UnitTest_TrapRain{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,trapRain.naive(n));
        }
    }
}
