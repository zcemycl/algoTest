using System;
using Xunit;
using Sample.MaxAreaIsland;

namespace Sample.Tests{
    public class UnitTest_MaxAreaIsland{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,maxAreaIsland.naive(n));
        }
    }
}
