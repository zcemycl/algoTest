using System;
using Xunit;
using Sample.ConsecutiveChars;

namespace Sample.Tests{
    public class UnitTest_ConsecutiveChars{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,consecutiveChars.naive(n));
        }
    }
}
