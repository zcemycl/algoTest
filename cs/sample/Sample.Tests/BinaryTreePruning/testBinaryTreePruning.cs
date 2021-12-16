using System;
using Xunit;
using Sample.BinaryTreePruning;

namespace Sample.Tests{
    public class UnitTest_BinaryTreePruning{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,binaryTreePruning.naive(n));
        }
    }
}
