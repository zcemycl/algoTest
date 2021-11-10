using System;
using Xunit;
using Sample.ValidParentheses;

namespace Sample.Tests{
    public class UnitTest_ValidParentheses{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,validParentheses.naive(n));
        }
    }
}
