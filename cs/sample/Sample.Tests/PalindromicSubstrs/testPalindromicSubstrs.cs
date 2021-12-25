using System;
using Xunit;
using Sample.PalindromicSubstrs;

namespace Sample.Tests{
    public class UnitTest_PalindromicSubstrs{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,palindromicSubstrs.naive(n));
        }
    }
}
