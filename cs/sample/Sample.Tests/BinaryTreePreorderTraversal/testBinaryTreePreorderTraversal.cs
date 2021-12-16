using System;
using Xunit;
using Sample.BinaryTreePreorderTraversal;

namespace Sample.Tests{
    public class UnitTest_BinaryTreePreorderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,binaryTreePreorderTraversal.naive(n));
        }
    }
}
