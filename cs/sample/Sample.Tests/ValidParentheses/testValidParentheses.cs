using System;
using Xunit;
using Sample.ValidParentheses;

namespace Sample.Tests{
    public class UnitTest_ValidParentheses{
        [Theory]
        [InlineData("()",true)]
        [InlineData("()[]{}",true)]
        [InlineData("({})",true)]
        [InlineData("",true)]
        [InlineData("([)]",false)]
        public void checkResult(string s,bool expected){
            Assert.Equal(expected,validParentheses.naive(s));
        }
    }
}
