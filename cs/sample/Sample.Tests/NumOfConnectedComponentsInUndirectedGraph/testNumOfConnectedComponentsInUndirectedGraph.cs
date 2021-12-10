using System;
using Xunit;
using Sample.NumOfConnectedComponentsInUndirectedGraph;

namespace Sample.Tests{
    public class UnitTest_NumOfConnectedComponentsInUndirectedGraph{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,numOfConnectedComponentsInUndirectedGraph.naive(n));
        }
    }
}
