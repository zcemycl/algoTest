using System;
using Xunit;
using Sample.BinaryTreeLevelOrderTraversal;

namespace Sample.Tests{
    public class UnitTest_BinaryTreeLevelOrderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,binaryTreeLevelOrderTraversal.naive(n));
        }
    }
}
