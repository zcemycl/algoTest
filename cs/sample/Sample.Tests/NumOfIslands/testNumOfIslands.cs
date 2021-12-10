using System;
using Xunit;
using Sample.NumOfIslands;

namespace Sample.Tests{
    public class UnitTest_NumOfIslands{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,numOfIslands.naive(n));
        }
    }
}
