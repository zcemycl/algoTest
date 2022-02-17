using System;
using Xunit;
using Sample.LoggerRateLimiter;

namespace Sample.Tests{
    public class UnitTest_LoggerRateLimiter{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,loggerRateLimiter.naive(n));
        }
    }
}
