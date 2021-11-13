using System;
using Xunit;
using Sample.ReverseInt;

namespace Sample.Tests{
    public class UnitTest_ReverseInt{
        [Theory]
        [InlineData(0,0)]
        [InlineData(123,321)]
        [InlineData(-123,-321)]
        [InlineData(120,21)]
        [InlineData(-1123456789,0)]
        [InlineData(1123456789,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,reverseInt.naive(n));
        }
    }
}
