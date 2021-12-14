using System;
using Xunit;
using Sample.RangeSumBST;

namespace Sample.Tests{
    public class UnitTest_RangeSumBST{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rangeSumBST.naive(n));
        }
    }
}
