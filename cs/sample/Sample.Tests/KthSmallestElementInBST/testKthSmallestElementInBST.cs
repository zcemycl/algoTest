using System;
using Xunit;
using Sample.KthSmallestElementInBST;

namespace Sample.Tests{
    public class UnitTest_KthSmallestElementInBST{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,kthSmallestElementInBST.naive(n));
        }
    }
}
