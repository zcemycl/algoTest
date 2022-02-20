using System;
using Xunit;
using Sample.PascalTriangle2;

namespace Sample.Tests{
    public class UnitTest_PascalTriangle2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,pascalTriangle2.naive(n));
        }
    }
}
