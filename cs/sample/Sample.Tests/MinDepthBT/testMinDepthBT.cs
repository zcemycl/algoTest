using System;
using Xunit;
using Sample.MinDepthBT;

namespace Sample.Tests{
    public class UnitTest_MinDepthBT{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,minDepthBT.naive(n));
        }
    }
}
