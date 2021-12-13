using System;
using Xunit;
using Sample.ValidPalindrome;

namespace Sample.Tests{
    public class UnitTest_ValidPalindrome{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,validPalindrome.naive(n));
        }
    }
}
