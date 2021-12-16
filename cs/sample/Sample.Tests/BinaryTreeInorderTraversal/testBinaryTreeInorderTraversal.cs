using System;
using Xunit;
using Sample.BinaryTreeInorderTraversal;

namespace Sample.Tests{
    public class UnitTest_BinaryTreeInorderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,binaryTreeInorderTraversal.naive(n));
        }
    }
}

