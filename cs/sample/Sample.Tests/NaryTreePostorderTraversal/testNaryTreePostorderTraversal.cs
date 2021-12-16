using System;
using Xunit;
using Sample.NaryTreePostorderTraversal;

namespace Sample.Tests{
    public class UnitTest_NaryTreePostorderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,naryTreePostorderTraversal.naive(n));
        }
    }
}
