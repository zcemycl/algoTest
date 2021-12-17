using System;
using Xunit;
using Sample.MinPathSum;

namespace Sample.Tests{
    public class UnitTest_MinPathSum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,minPathSum.naive(n));
        }
    }
}
