using System;
using Xunit;
using Sample.LongestRepeatingCharReplacement;

namespace Sample.Tests{
    public class UnitTest_LongestRepeatingCharReplacement{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,longestRepeatingCharReplacement.naive(n));
        }
    }
}
