using System;
using Xunit;
using Sample.SpiralMatrix;

namespace Sample.Tests{
    public class UnitTest_SpiralMatrix{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,spiralMatrix.naive(n));
        }
    }
}
