using System;
using Xunit;
using Sample.ComplementBase10Int;

namespace Sample.Tests{
    public class UnitTest_ComplementBase10Int{
        [Theory]
        [InlineData(5,2)]
        [InlineData(10,5)]
        [InlineData(7,0)]
        [InlineData(0,1)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,complementBase10Int.naive(n));
        }
    }
}
