using System;
using Xunit;
using Sample.MaxDepthBT;

namespace Sample.Tests{
    public class UnitTest_MaxDepthBT{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,maxDepthBT.naive(n));
        }
    }
}
