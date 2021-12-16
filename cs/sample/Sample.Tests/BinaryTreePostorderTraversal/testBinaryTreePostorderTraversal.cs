using System;
using Xunit;
using Sample.BinaryTreePostorderTraversal;

namespace Sample.Tests{
    public class UnitTest_BinaryTreePostorderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,binaryTreePostorderTraversal.naive(n));
        }
    }
}
