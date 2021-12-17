using System;
using Xunit;
using Sample.CountingBits;

namespace Sample.Tests{
    public class UnitTest_CountingBits{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,countingBits.naive(n));
        }
    }
}
