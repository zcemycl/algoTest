using System;
using Xunit;
using Sample.BfsShortestPaths;

namespace Sample.Tests{
    public class UnitTest_BfsShortestPaths{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,bfsShortestPaths.naive(n));
        }
    }
}
