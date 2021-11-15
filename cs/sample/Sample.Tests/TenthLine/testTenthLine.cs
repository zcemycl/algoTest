using System;
using Xunit;
using Sample.TenthLine;

namespace Sample.Tests{
    public class UnitTest_TenthLine{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,tenthLine.naive(n));
        }
    }
}
