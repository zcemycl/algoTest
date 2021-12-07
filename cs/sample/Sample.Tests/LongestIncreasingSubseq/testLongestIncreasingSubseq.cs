using System;
using Xunit;
using Sample.LongestIncreasingSubseq;

namespace Sample.Tests{
    public class UnitTest_LongestIncreasingSubseq{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,longestIncreasingSubseq.naive(n));
        }
    }
}
