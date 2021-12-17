using System;
using Xunit;
using Sample.ReverseBits;

namespace Sample.Tests{
    public class UnitTest_ReverseBits{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,reverseBits.naive(n));
        }
    }
}
