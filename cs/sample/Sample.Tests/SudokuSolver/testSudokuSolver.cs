using System;
using Xunit;
using Sample.SudokuSolver;

namespace Sample.Tests{
    public class UnitTest_SudokuSolver{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,sudokuSolver.naive(n));
        }
    }
}
