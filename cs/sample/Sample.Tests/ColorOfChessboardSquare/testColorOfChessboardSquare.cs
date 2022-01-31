using System;
using Xunit;
using Sample.ColorOfChessboardSquare;

namespace Sample.Tests{
    public class UnitTest_ColorOfChessboardSquare{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,colorOfChessboardSquare.naive(n));
        }
    }
}
