using System;
using Xunit;
using Sample.NumOf1Bits;

namespace Sample.Tests{
    public class UnitTest_NumOf1Bits{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,numOf1Bits.naive(n));
        }
    }
}
