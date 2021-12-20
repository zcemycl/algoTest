using System;
using Xunit;
using Sample.Dijkstra;

namespace Sample.Tests{
    public class UnitTest_Dijkstra{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,dijkstra.naive(n));
        }
    }
}
