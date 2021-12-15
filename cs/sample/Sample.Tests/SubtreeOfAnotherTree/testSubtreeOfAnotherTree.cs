using System;
using Xunit;
using Sample.SubtreeOfAnotherTree;

namespace Sample.Tests{
    public class UnitTest_SubtreeOfAnotherTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,subtreeOfAnotherTree.naive(n));
        }
    }
}
