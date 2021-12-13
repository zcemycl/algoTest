using System;
using Xunit;
using Sample.ValidAnagram;

namespace Sample.Tests{
    public class UnitTest_ValidAnagram{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,validAnagram.naive(n));
        }
    }
}
