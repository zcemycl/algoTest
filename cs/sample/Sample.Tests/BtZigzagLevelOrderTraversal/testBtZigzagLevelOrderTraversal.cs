using System;
using Xunit;
using Sample.BtZigzagLevelOrderTraversal;

namespace Sample.Tests{
    public class UnitTest_BtZigzagLevelOrderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,btZigzagLevelOrderTraversal.naive(n));
        }
    }
}
