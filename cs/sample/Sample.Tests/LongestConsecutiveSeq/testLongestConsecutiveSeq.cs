using System;
using Xunit;
using Sample.LongestConsecutiveSeq;

namespace Sample.Tests{
    public class UnitTest_LongestConsecutiveSeq{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,longestConsecutiveSeq.naive(n));
        }
    }
}
