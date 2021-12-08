using System;
using Xunit;
using Sample.WordBreak;

namespace Sample.Tests{
    public class UnitTest_WordBreak{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,wordBreak.naive(n));
        }
    }
}
