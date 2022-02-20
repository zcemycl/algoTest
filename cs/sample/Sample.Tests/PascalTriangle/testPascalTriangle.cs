using System;
using Xunit;
using Sample.PascalTriangle;

namespace Sample.Tests{
    public class UnitTest_PascalTriangle{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,pascalTriangle.naive(n));
        }
    }
}
