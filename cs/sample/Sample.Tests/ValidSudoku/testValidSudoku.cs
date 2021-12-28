using System;
using Xunit;
using Sample.ValidSudoku;

namespace Sample.Tests{
    public class UnitTest_ValidSudoku{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,validSudoku.naive(n));
        }
    }
}
