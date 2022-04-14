using System;
using Xunit;
using Sample.BinaryTreeMaxPathSum;

namespace Sample.Tests{
    public class UnitTest_BinaryTreeMaxPathSum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,binaryTreeMaxPathSum.naive(n));
        }
    }
}
