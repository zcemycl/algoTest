using System;
using Xunit;
using Sample.LongestCommonSubseq;

namespace Sample.Tests{
    public class UnitTest_LongestCommonSubseq{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,longestCommonSubseq.naive(n));
        }
    }
}
