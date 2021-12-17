using System;
using Xunit;
using Sample.SetMatrixZeros;

namespace Sample.Tests{
    public class UnitTest_SetMatrixZeros{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,setMatrixZeros.naive(n));
        }
    }
}
