using System;
using Xunit;
using Sample.ShortestPathInGridWithObstaclesElimination;

namespace Sample.Tests{
    public class UnitTest_ShortestPathInGridWithObstaclesElimination{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,shortestPathInGridWithObstaclesElimination.naive(n));
        }
    }
}
