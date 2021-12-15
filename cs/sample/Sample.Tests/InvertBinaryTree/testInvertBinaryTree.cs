using System;
using Xunit;
using Sample.InvertBinaryTree;

namespace Sample.Tests{
    public class UnitTest_InvertBinaryTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,invertBinaryTree.naive(n));
        }
    }
}
