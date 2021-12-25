using System;
using Xunit;
using Sample.LongestPalindromicSubstr;

namespace Sample.Tests{
    public class UnitTest_LongestPalindromicSubstr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,longestPalindromicSubstr.naive(n));
        }
    }
}
