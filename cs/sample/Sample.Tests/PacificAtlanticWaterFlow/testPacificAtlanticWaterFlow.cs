using System;
using Xunit;
using Sample.PacificAtlanticWaterFlow;

namespace Sample.Tests{
    public class UnitTest_PacificAtlanticWaterFlow{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,pacificAtlanticWaterFlow.naive(n));
        }
    }
}
