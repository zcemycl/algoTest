using System;
using Xunit;
using Sample.BtVerticalOrderTraversal;

namespace Sample.Tests{
    public class UnitTest_BtVerticalOrderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,btVerticalOrderTraversal.naive(n));
        }
    }
}
