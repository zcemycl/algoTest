using System;
using Xunit;
using Sample.ShortestPathInBinaryMat;

namespace Sample.Tests{
    public class UnitTest_ShortestPathInBinaryMat{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,shortestPathInBinaryMat.naive(n));
        }
    }
}
