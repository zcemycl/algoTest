using System;
using Xunit;
using Sample.LenOfLastWord;

namespace Sample.Tests{
    public class UnitTest_LenOfLastWord{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,lenOfLastWord.naive(n));
        }
    }
}
