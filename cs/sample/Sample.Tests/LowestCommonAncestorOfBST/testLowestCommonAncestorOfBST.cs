using System;
using Xunit;
using Sample.LowestCommonAncestorOfBST;

namespace Sample.Tests{
    public class UnitTest_LowestCommonAncestorOfBST{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,lowestCommonAncestorOfBST.naive(n));
        }
    }
}
