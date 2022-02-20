using System;
using Xunit;
using Sample.BtLevelOrderTraversal2;

namespace Sample.Tests{
    public class UnitTest_BtLevelOrderTraversal2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,btLevelOrderTraversal2.naive(n));
        }
    }
}
