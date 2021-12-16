using System;
using Xunit;
using Sample.NaryTreePreorderTraversal;

namespace Sample.Tests{
    public class UnitTest_NaryTreePreorderTraversal{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,naryTreePreorderTraversal.naive(n));
        }
    }
}
