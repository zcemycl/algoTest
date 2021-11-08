using System; 
using Xunit;
using Sample.IsPalindrome;

namespace Sample.Tests{
    public class UnitTest_IsPalindrome{
        [Theory]
        [InlineData(0,true)]
        [InlineData(-121,false)]
        [InlineData(121,true)]
        [InlineData(10,false)]
        public void checkResult(int x,bool expected){
            Assert.Equal(expected,isPalindrome.naive(x));
        }
    }
}