using System;
using Xunit;
using Sample.GraphValidTree;

namespace Sample.Tests{
    public class UnitTest_GraphValidTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,graphValidTree.naive(n));
        }
    }
}
