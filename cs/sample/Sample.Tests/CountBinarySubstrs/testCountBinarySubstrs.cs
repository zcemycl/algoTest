using System;
using Xunit;
using Sample.CountBinarySubstrs;

namespace Sample.Tests{
    public class UnitTest_CountBinarySubstrs{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,countBinarySubstrs.naive(n));
        }
    }
}
